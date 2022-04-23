#include "clientgeneral.h"

void ClientGeneral::onConnected()
{
    qDebug() << "WebSocketServer connected";
    connect(&socketServer,
            &QWebSocket::textMessageReceived,
            this,
            &ClientGeneral::onTextMessageReceived);
}

void ClientGeneral::onTextMessageReceived(QString message)
{
    QWebSocket *socket = qobject_cast<QWebSocket *>(sender());

    QJsonObject object = ProtocolCommunication::StringToJsonObject(message);

    if(ProtocolCommunication::CompareSocket(socket, &socketServer))
    {
        processingEventFromServer(&object);
    }
    else
    {
        qDebug() << "не от сервера";
    }
}

void ClientGeneral::onSslErrors(const QList<QSslError> &errors)
{
    Q_UNUSED(errors);
    socketServer.ignoreSslErrors();
}

void ClientGeneral::processingEventFromServer(QJsonObject *object)
{
    QString command = ((*object)[ProtocolCommunication::___COMMAND]).toString();

    if(command == ProtocolCommunication::___CMD_AUTHORIZATION)
    {
        handlerAuthorization(object);
    }
    else if(command == ProtocolCommunication::___CMD_REGISTRATION)
    {
        handlerRegistration(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_INFO_ABOUT_USER)
    {
        handlerInformationAboutUser(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_PLANTS_USER)
    {
        handlerPlantsUser(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_NAME_ID_FROM_GLOSSARY)
    {
        handlerNameIdFromGlossary(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_DESCRIPTION_FROM_GLOSSARY)
    {
        handlerDescriptionFromGlossary(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_CARE_INFO_FROM_GLOSSARY)
    {
        handlerCareInfoFromGlossary(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_AVATAR_FROM_GLOSSARY)
    {
        handlerAvatarFromGlossary(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_USER_TASK)
    {
        handlerUserTask(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_MEDIA_FOR_PLANT_ALL)
    {
        handlerMediaForFarmerPlantAll(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_MEDIA_FOR_PLANT_ONE)
    {
        handlerMediaForFarmerPlantOne(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_LOG_FOR_USER)
    {
        handlerLogForPlant(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_LOG_FOR_PLANT)
    {
        handlerLogForPlant(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_ACHIVEMENTS_USER)
    {
        handlerAchivementsUser(object);
    }
    else if(command == ProtocolCommunication::___CMD_GET_INFO_ABOUT_ACHIVEMENT)
    {
        handlerInfoAboutAchivement(object);
    }
}

void ClientGeneral::handlerAuthorization(QJsonObject *object)
{

}

void ClientGeneral::handlerRegistration(QJsonObject *object)
{

}

void ClientGeneral::handlerInformationAboutUser(QJsonObject *object)
{

}

void ClientGeneral::handlerPlantsUser(QJsonObject *object)
{

}

void ClientGeneral::handlerNameIdFromGlossary(QJsonObject *object)
{

}

void ClientGeneral::handlerDescriptionFromGlossary(QJsonObject *object)
{

}

void ClientGeneral::handlerCareInfoFromGlossary(QJsonObject *object)
{

}

void ClientGeneral::handlerAvatarFromGlossary(QJsonObject *object)
{

}

void ClientGeneral::handlerUserTask(QJsonObject *object)
{

}

void ClientGeneral::handlerMediaForFarmerPlantAll(QJsonObject *object)
{

}

void ClientGeneral::handlerMediaForFarmerPlantOne(QJsonObject *object)
{

}

void ClientGeneral::handlerLogForUser(QJsonObject *object)
{

}

void ClientGeneral::handlerLogForPlant(QJsonObject *object)
{

}

void ClientGeneral::handlerAchivementsUser(QJsonObject *object)
{

}

void ClientGeneral::handlerInfoAboutAchivement(QJsonObject *object)
{

}

void ClientGeneral::sendAuthorization(QString login, QString password)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_AUTHORIZATION)},
                                                {ProtocolCommunication::___LOGIN, QJsonValue(login)},
                                                {ProtocolCommunication::___PASSWORD, QJsonValue(password)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendRegistration(QString login, QString password, QString email)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_AUTHORIZATION)},
                                                {ProtocolCommunication::___LOGIN, QJsonValue(login)},
                                                {ProtocolCommunication::___PASSWORD, QJsonValue(password)},
                                                {ProtocolCommunication::___E_MAIL, QJsonValue(email)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetInformationAboutUser(QString login)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_INFO_ABOUT_USER)},
                                                {ProtocolCommunication::___LOGIN, QJsonValue(login)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetPlantsUser(QString login)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_PLANTS_USER)},
                                                {ProtocolCommunication::___LOGIN, QJsonValue(login)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendAddPlantForUser(QString login, QString stage, QString date, QString typeGround, QString idPlant, QString name, QString avatar)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_ADD_PLANT_FOR_USER)},
                                                {ProtocolCommunication::___LOGIN, QJsonValue(login)},
                                                {ProtocolCommunication::___STAGE_PLANT, QJsonValue(stage)},
                                                {ProtocolCommunication::___DATE_TIME, QJsonValue(date)},
                                                {ProtocolCommunication::___TYPE_GROUND, QJsonValue(typeGround)},
                                                {ProtocolCommunication::___ID, QJsonValue(idPlant)},
                                                {ProtocolCommunication::___NAME, QJsonValue(name)},
                                                {ProtocolCommunication::___IMAGE, QJsonValue(avatar)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetNameIdFromGlossary()
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_NAME_ID_FROM_GLOSSARY)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetDescriptionFromGlossary(QString idPlant)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_NAME_ID_FROM_GLOSSARY)},
                                                {ProtocolCommunication::___ID, QJsonValue(idPlant)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetCareInfoFromGlossary(QString idPlant)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_CARE_INFO_FROM_GLOSSARY)},
                                                {ProtocolCommunication::___ID, QJsonValue(idPlant)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetAvatarFromGlossary(QString idPlant)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_AVATAR_FROM_GLOSSARY)},
                                                {ProtocolCommunication::___ID, QJsonValue(idPlant)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetUserTask(QString login)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_USER_TASK)},
                                                {ProtocolCommunication::___ID, QJsonValue(login)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendAddUserTask(QString login, QString text, QString datetime)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_ADD_USER_TASK)},
                                                {ProtocolCommunication::___DESCRIPTION, QJsonValue(text)},
                                                {ProtocolCommunication::___LOGIN, QJsonValue(login)},
                                                {ProtocolCommunication::___DATE_TIME, QJsonValue(datetime)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetMediaForFarmerPlantAll(QString idPlant)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_MEDIA_FOR_PLANT_ALL)},
                                                {ProtocolCommunication::___ID, QJsonValue(idPlant)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetMediaForFarmerPlantOne(QString idPlant, QString idMedia)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_MEDIA_FOR_PLANT_ONE)},
                                                {ProtocolCommunication::___INST_ID, QJsonValue(idPlant)},
                                                {ProtocolCommunication::___ID, QJsonValue(idMedia)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendAddMediaForFarmerPlant(QString description, QString image, QString datetime, QString instID)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_ADD_MEDIA_FOR_PLANT)},
                                                {ProtocolCommunication::___DESCRIPTION, QJsonValue(description)},
                                                {ProtocolCommunication::___DATE_TIME, QJsonValue(datetime)},
                                                {ProtocolCommunication::___IMAGE, QJsonValue(image)},
                                                {ProtocolCommunication::___INST_ID, QJsonValue(instID)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetLogForUser(QString login)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_LOG_FOR_USER)},
                                                {ProtocolCommunication::___LOGIN, QJsonValue(login)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetLogForPlant(QString login, QString idPlant)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_LOG_FOR_PLANT)},
                                                {ProtocolCommunication::___LOGIN, QJsonValue(login)},
                                                {ProtocolCommunication::___INST_ID, QJsonValue(idPlant)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendAddLog(QString login, QString idPlant, QString idAction, QString datetime)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_ADD_LOG)},
                                                {ProtocolCommunication::___LOGIN, QJsonValue(login)},
                                                {ProtocolCommunication::___INST_ID, QJsonValue(idPlant)},
                                                {ProtocolCommunication::___ID, QJsonValue(idAction)},
                                                {ProtocolCommunication::___DATE_TIME, QJsonValue(datetime)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetAchivementsUser(QString login)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_ACHIVEMENTS_USER)},
                                                {ProtocolCommunication::___LOGIN, QJsonValue(login)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

void ClientGeneral::sendGetInfoAboutAchivement(QString id)
{
    QJsonObject* jObj = new QJsonObject({
                                                {ProtocolCommunication::___COMMAND, QJsonValue(ProtocolCommunication::___CMD_GET_INFO_ABOUT_ACHIVEMENT)},
                                                {ProtocolCommunication::___ID, QJsonValue(id)}
                                            });

    ProtocolCommunication::SendTextMessage(ProtocolCommunication::jsonObjectToString(jObj), &socketServer);
}

ClientGeneral::ClientGeneral(QObject *parent) : QObject(parent)
{
    connect(&socketServer,
            &QWebSocket::connected,
            this,
            &ClientGeneral::onConnected);

    connect(&socketServer,
            QOverload<const QList<QSslError>&>::of(&QWebSocket::sslErrors),
            this,
            &ClientGeneral::onSslErrors);

    socketServer.open(URL_SERVER);
}

