#include "servergeneral.h"

ServerGeneral::ServerGeneral(QObject *parent) : QObject(parent)
{
    webSocketServer = new QWebSocketServer(QStringLiteral("SSL Server"),
                                           QWebSocketServer::NonSecureMode,
                                           this);
    QSslConfiguration sslConfiguration;
    QFile certFile(QStringLiteral(":/localhost.cert"));
    QFile keyFile(QStringLiteral(":/localhost.key"));
    certFile.open(QIODevice::ReadOnly);
    keyFile.open(QIODevice::ReadOnly);
    QSslCertificate certificate(&certFile, QSsl::Pem);
    QSslKey sslKey(&keyFile, QSsl::Rsa, QSsl::Pem);
    certFile.close();
    keyFile.close();
    sslConfiguration.setPeerVerifyMode(QSslSocket::VerifyNone);
    sslConfiguration.setLocalCertificate(certificate);
    sslConfiguration.setPrivateKey(sslKey);
    webSocketServer->setSslConfiguration(sslConfiguration);

    if (webSocketServer->listen(QHostAddress::Any, PORT_LISTENER))
    {
        qDebug() << "SSL Echo Server listening on port" << PORT_LISTENER;

        connect(webSocketServer,
                &QWebSocketServer::newConnection,
                this,
                &ServerGeneral::onNewConnection);

        connect(webSocketServer,
                &QWebSocketServer::sslErrors,
                this,
                &ServerGeneral::onSslErrors);
    }
}

void ServerGeneral::onNewConnection()
{
    QWebSocket *pSocket = webSocketServer->nextPendingConnection();

    qDebug() << "Client connected:" << pSocket->peerPort();

    connect(pSocket,
            &QWebSocket::textMessageReceived,
            this,
            &ServerGeneral::processTextMessage);

    connect(pSocket,
            &QWebSocket::binaryMessageReceived,
            this,
            &ServerGeneral::processBinaryMessage);

    connect(pSocket,
            &QWebSocket::disconnected,
            this,
            &ServerGeneral::socketDisconnected);

    clientsOnline.push_back({pSocket, "", false});
}

void ServerGeneral::processTextMessage(QString message)
{
    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());

    QJsonObject object = ProtocolCommunication::StringToJsonObject(message);

    MainHandlerMessage(&object, FindClient(pClient));
}

void ServerGeneral::processBinaryMessage(QByteArray message)
{
    //QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());

    qDebug() << message;
}

void ServerGeneral::socketDisconnected()
{
    qDebug() << "Client disconnected";

    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());

    if (pClient)
    {
        RemoveClient(pClient);
        pClient->deleteLater();
    }
}

void ServerGeneral::onSslErrors(const QList<QSslError> &errors)
{
    qDebug() << "Ssl errors occurred " << errors;
}

void ServerGeneral::RemoveClient(QWebSocket *client)
{
    for(int i = 0; i < clientsOnline.count(); i++)
    {
        if((clientsOnline[i].socket->peerAddress() == client->peerAddress()) && (clientsOnline[i].socket->peerPort() == client->peerPort()))
        {
            clientsOnline.remove(i);
        }
    }
}

DataClientOnline* ServerGeneral::FindClient(QWebSocket *client)
{
    for(int i = 0; i < clientsOnline.count(); i++)
    {
        if((clientsOnline[i].socket->peerAddress() == client->peerAddress()) && (clientsOnline[i].socket->peerPort() == client->peerPort()))
        {
            return &(clientsOnline[i]);
        }
    }

    return nullptr;
}

DataClientOnline* ServerGeneral::FindClient(QString login)
{
    for(int i = 0; i < clientsOnline.count(); i++)
    {
        if(clientsOnline[i].login == login)
        {
            return &(clientsOnline[i]);
        }
    }

    return nullptr;
}

void ServerGeneral::MainHandlerMessage(QJsonObject *object, DataClientOnline *client)
{
    QString command = ((*object)[ProtocolCommunication::___COMMAND]).toString();

    if(command == ProtocolCommunication::___CMD_AUTHORIZATION)
    {
        handlerAuthorization(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_REGISTRATION)
    {
        handlerRegistration(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_INFO_ABOUT_USER)
    {
        handlerGetInformationAboutUser(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_PLANTS_USER)
    {
        handlerGetPlantsUser(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_NAME_ID_FROM_GLOSSARY)
    {
        handlerGetNameIdFromGlossary(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_DESCRIPTION_FROM_GLOSSARY)
    {
        handlerGetDescriptionFromGlossary(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_CARE_INFO_FROM_GLOSSARY)
    {
        handlerGetCareInfoFromGlossary(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_AVATAR_FROM_GLOSSARY)
    {
        handlerGetAvatarFromGlossary(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_USER_TASK)
    {
        handlerGetUserTask(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_ADD_USER_TASK)
    {
        handlerAddUserTask(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_MEDIA_FOR_PLANT_ALL)
    {
        handlerGetMediaForFarmerPlantAll(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_MEDIA_FOR_PLANT_ONE)
    {
        handlerGetMediaForFarmerPlantOne(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_ADD_MEDIA_FOR_PLANT)
    {
        handlerAddMediaForFarmerPlant(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_ADD_PLANT_FOR_USER)
    {
        handlerAddPlantForUser(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_LOG_FOR_USER)
    {
        handlerGetLogForUser(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_LOG_FOR_PLANT)
    {
        handlerGetLogForPlant(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_ADD_LOG)
    {
        handlerAddLog(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_ACHIVEMENTS_USER)
    {
        handlerGetAchivementsUser(object, client);
    }
    else if(command == ProtocolCommunication::___CMD_GET_INFO_ABOUT_ACHIVEMENT)
    {
        handlerGetInfoAboutAchivement(object, client);
    }
}

void ServerGeneral::handlerAuthorization(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerRegistration(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetInformationAboutUser(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetPlantsUser(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerAddPlantForUser(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetNameIdFromGlossary(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetDescriptionFromGlossary(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetCareInfoFromGlossary(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetAvatarFromGlossary(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetUserTask(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerAddUserTask(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetMediaForFarmerPlantAll(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetMediaForFarmerPlantOne(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerAddMediaForFarmerPlant(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetLogForUser(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetLogForPlant(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerAddLog(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetAchivementsUser(QJsonObject *object, DataClientOnline *client)
{

}

void ServerGeneral::handlerGetInfoAboutAchivement(QJsonObject *object, DataClientOnline *client)
{

}

