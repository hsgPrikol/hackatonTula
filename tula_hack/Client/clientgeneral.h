#ifndef CLIENTGENERAL_H
#define CLIENTGENERAL_H

#include <QObject>
#include <QFile>
#include <QSslKey>
#include <QWebSocket>
#include <QJsonArray>
#include <QMap>

#include "../protocolcommunication.h"
#include "../../SuperServer/farmer.h"
#include "../../SuperServer/farmerplant.h"
#include "../../SuperServer/plant.h"
#include "../../SuperServer/farmertask.h"
#include "../../SuperServer/achivement.h"

class ClientGeneral : public QObject
{
    Q_OBJECT
public:
    explicit ClientGeneral(QObject *parent = nullptr);

private:
    const QUrl URL_SERVER = QUrl(QStringLiteral("ws://localhost:1234"));

    QWebSocket socketServer;

    bool isAuthorization = false;
    QString myLogin;
    Farmer farmer;
    QMap<int, FarmerPlant> plantsFarmer;
    QMap<int, Plant> plants;
    QMap<int, FarmerTask> tasksFarmer;
    QMap<int, Achivement> achivementFarmer;

    void onConnected();
    void onTextMessageReceived(QString message);
    void onSslErrors(const QList<QSslError> &errors);

    void processingEventFromServer(QJsonObject* object);

    void handlerAuthorization(QJsonObject* object);
    void handlerRegistration(QJsonObject* object);

    void handlerInformationAboutUser(QJsonObject* object);

    void handlerPlantsUser(QJsonObject* object);

    void handlerNameIdFromGlossary(QJsonObject* object);
    void handlerDescriptionFromGlossary(QJsonObject* object);
    void handlerCareInfoFromGlossary(QJsonObject* object);
    void handlerAvatarFromGlossary(QJsonObject* object);
    void handlerAllDataFromGlossary(QJsonObject* object);

    void handlerUserTask(QJsonObject* object);

    void handlerMediaForFarmerPlantAll(QJsonObject* object);
    void handlerMediaForFarmerPlantOne(QJsonObject* object);

    void handlerLogForUser(QJsonObject* object);
    void handlerLogForPlant(QJsonObject* object);

    void handlerAchivementsUser(QJsonObject* object);
    void handlerInfoAboutAchivement(QJsonObject* object);
    void handlerAllDataAchivementsUser(QJsonObject* object);
public slots:

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /// Отправка запроса на авторизацию
    void sendAuthorization(QString login, QString password);

    /// Отправка запроса на регистрацию
    void sendRegistration(QString login, QString password, QString email);
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /// Отправка запроса на получение информации о пользователи (из таблицы farmer)
    void sendGetInformationAboutUser(QString login);
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /// Отправка запроса на получение информации о растениях пользователя (из таблицы farmer_plant)
    void sendGetPlantsUser(QString login);

    /// Добавление нового растения к пользователю
    void sendAddPlantForUser(QString login, QString stage, QString date, QString typeGround, QString idPlant, QString name, QString avatar);
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /// Отправка запроса на получение информации из глоссария о всех растениях (имя и id)
    void sendGetNameIdFromGlossary();

    /// Отправка запроса на получение информации (статьи) о конкретном растении
    void sendGetDescriptionFromGlossary(QString idPlant);

    /// Отправка запроса на получение инструкции по уходу о конкретном растении
    void sendGetCareInfoFromGlossary(QString idPlant);

    /// Отправка запроса на получение аватара растения из глоссария
    void sendGetAvatarFromGlossary(QString idPlant);

    /// Отправка запроса на получении всей информации из глоссария
    void sendGetAllDataFromGlossary();
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /// Отправка запроса на получения пользовательских задач
    void sendGetUserTask(QString login);

    /// Добавление пользовательской задачи
    void sendAddUserTask(QString login, QString text, QString datetime);
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /// Отправка запроса на получение всего медиа контента для растения
    void sendGetMediaForFarmerPlantAll(QString idPlant);

    /// Отправка запроса на получение конкретного медиа контента для конкретного растения
    void sendGetMediaForFarmerPlantOne(QString idMedia);

    /// Добавление нового медиа для конкретного растения
    void sendAddMediaForFarmerPlant(QString description, QString image, QString instID);
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /// Отправка запроса на получение всех логов для пользователя
    void sendGetLogForUser(QString login);

    /// Отправка запроса на получение логов для конкретного растения пользователя
    void sendGetLogForPlant(QString idPlant);

    /// Добавление новго лога пользователя по растению
    void sendAddLog(QString login, QString idPlant, QString idAction, QString datetime);
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /// Отправка запроса на получение ачивок конкретного пользователя
    void sendGetAchivementsUser(QString login);

    /// Отправка запроса на получение информации об ачивки
    void sendGetInfoAboutAchivement(QString id);

    /// Отправка запроса на получение всех ачивок конкретного пользователя
    void sendGetAllDataAchivementsUser(QString login);
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /// Изменение статуса растения
    void setStatusPlant(QString instID, QString newValueStatus);

    /// Изменение фазы роста растения
    void setStagePlant(QString instID, QString newValueStage);
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
signals:
    void onAnswerAuthorization(bool result);
    void onAnswerRegistration(bool result);

    void onAnswerInformationAboutUser();

    void onAnswerPlantsUser();

    //void onAnswerNameIdFromGlossary();
    //void onAnswerDescriptionFromGlossary();
    //void onAnswerCareInfoFromGlossary();
    //void onAnswerAvatarFromGlossary();
    void onAnswerAllDataFromGlossary();

    void onAnswerUserTask();

    void onAnswerMediaForFarmerPlantAll();
    //void onAnswerMediaForFarmerPlantOne();

    void onAnswerLogForUser();
    //void onAnswerLogForPlant();

    //void onAnswerAchivementsUser();
    //void onAnswerInfoAboutAchivement();
    void onAnswerAllDataAchivementsUser();


//    void onAddPlantFarmer(int, )
};

#endif // CLIENTGENERAL_H
