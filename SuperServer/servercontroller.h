#ifndef SERVERCONTROLLER_H
#define SERVERCONTROLLER_H
#define svalue(a) query.value(a).toString()
#define ivalue(a) query.value(a).toInt()
#define tostr(a) QString::number(a)

#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <instruments.h>
#include "farmer.h"
#include "plant.h"
#include "farmerplant.h"
#include "achivement.h"

class ServerController
{
private:
    QSqlDatabase db;
    static ServerController* instance;
    bool startServer();
public:
    ServerController();
    ///Паерн синглтон
    static ServerController * getInstance();
    ///Ауентификация пользователя: 1 - удачно, 0 - неверно
    int confirmAuthorization(QString login, QString passhash);
    ///Получить профиль по id
    Farmer* getUser(QString login);

    //------------------------------------------------------------------

    ///Получиь растение из глоссария по id
    Plant* getPlant(int id);
    ///Получиь ВСЕ растения из глоссария
    QVector<Plant> getAllPlant();

    //------------------------------------------------------------------

    ///Получить тип грунта
    QString getTypePlant(int id);

    ///Получить заметки фермера для растения по id медиа
    MediaPlant* getMediaPlant(int id_media);
    ///Получить ВСЕ заметки фермера для id растения
     QVector<MediaPlant> getAllMediaPlant(int id);

     ///Получить название лога по id лога
     QString getActionType(int id_action);
     ///Получить лог по id лога и id цветка
     LogPlant *getLogPlant(int id_log, int id_plant);
     ///Получить ВСЕ логи по id цветка
     QVector<LogPlant> getAllLogPlant(int id_plant);

    ///Получить растения фермера по id растения
    FarmerPlant* getFarmerPlant(int id);
    ///Получить ВСЕ растения фермера
    QVector<FarmerPlant> getAlFarmerPlant(QString login_Farmer);

    //------------------------------------------------------------------

    ///Получить ачивку и прогресс для пользователя по id ачивки
    Achivement* getAchivment(int id_ach, QString login_Farmer);
    ///Получить прогресс ВСЕХ ачивок для пользователя
    QVector<Achivement> getAllAchivments(QString login_Farmer);


};

#endif // SERVERCONTROLLER_H
