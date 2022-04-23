#include "servercontroller.h"

ServerController* ServerController::instance = nullptr;

ServerController::ServerController()
{
    startServer();
}

bool ServerController::startServer()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("C:/Users/Tihon/Desktop/sqlitestudio-3.3.3/SQLiteStudio/SuperDataBase");
    db.setDatabaseName("C:/Users/Rota5/Documents/cyberpark2022/SuperDataBase");
    if(db.open()){
        return true;
    } else {
        return false;
    }
}

ServerController *ServerController::getInstance()
{
    if(!instance)
        instance = new ServerController();
    return instance;
}

int ServerController::confirmAuthorization(QString login, QString passhash)
{
    auto str = QString("SELECT login, password FROM farmer where login = '%0';").arg(login.toLower());
    QSqlQuery query(str);

    if(!query.first()){
        qDebug() << QString("login '%0': not exist").arg(login.toLower());
        return -1;
    }
    else{
        QString true_hash_pass = svalue(1);
        if(true_hash_pass == passhash){
            // add user to adffklhaddgvklds
            qDebug() << QString("login '%0': successful authorization").arg(login.toLower());
            return 1;
        }
        else{
            // poshol
            qDebug() << QString("login '%0': wrong password").arg(login.toLower());
            return 0;
        }
    }
}

Farmer *ServerController::getUser(QString login)
{
    auto str = QString("SELECT mail, user_name, avatar, birth_date, registration_date, carm, exp FROM farmer WHERE login = '%0';").arg(login);
    QSqlQuery query(str);
    if(!query.first())
        return nullptr;
    Farmer* user= new Farmer(login,svalue(0), svalue(1), query.value(2).toByteArray(), Instruments::getDate(svalue(3)), Instruments::getDateTime(svalue(4)), ivalue(5), ivalue(6));
    return user;
}

Plant *ServerController::getPlant(int id)
{
    auto str = QString("SELECT name, info_path, description_path, avatar FROM plant WHERE id = %0;").arg(id);
    QSqlQuery query(str);
    if(!query.first())
        return nullptr;
    Plant* plant= new Plant(id, svalue(0), query.value(1).toByteArray(),query.value(2).toByteArray(),query.value(3).toByteArray() );
    return plant;
}

QVector<Plant> ServerController::getAllPlant()
{
    auto str = QString("SELECT id FROM plant;");
    QSqlQuery query(str);

    QVector<Plant> plants;

    while(query.next())
    {
        int plant_id = ivalue(0);
        Plant* plant=getPlant(plant_id);
        plants.append(*plant);
    }

    return plants;
}

QString ServerController::getTypePlant(int id)
{
    auto str = QString("SELECT name FROM type_plant WHERE id = %0;").arg(id);
    QSqlQuery query(str);
    if(!query.first())
        return nullptr;
    return svalue(0);
}

MediaPlant *ServerController::getMediaPlant(int id_media)
{
    auto str = QString("SELECT inst_id, description, image, datetime FROM media_plant WHERE id = %0;").arg(id_media);
    QSqlQuery query(str);
    if(!query.first())
        return nullptr;
    MediaPlant* media= new MediaPlant(id_media, ivalue(0), svalue(1),  query.value(2).toByteArray(), Instruments::getDateTime(svalue(3)));
    return media;
}

QVector<MediaPlant> ServerController::getAllMediaPlant(int id)
{
    auto str = QString("SELECT id FROM media_plant WHERE inst_id=%0;").arg(id);
    QSqlQuery query(str);

    QVector<MediaPlant> mediasPlant;

    while(query.next())
    {
        int plant_id = ivalue(0);
        MediaPlant* mediaPlant=getMediaPlant(plant_id);
        mediasPlant.append(*mediaPlant);
    }

    return mediasPlant;
}

QString ServerController::getActionType(int id_action)
{
    auto str = QString("SELECT name FROM action_type WHERE id = %0;").arg(id_action);
    QSqlQuery query(str);
    if(!query.first())
        return nullptr;
    return svalue(0);
}

LogPlant* ServerController::getLogPlant(int id_log, int id_plant)
{
    auto str = QString("SELECT id_action, date FROM log WHERE id = %0 AND inst_id = %1;").arg(id_log).arg(id_plant);
    QSqlQuery query(str);
    if(!query.first())
        return nullptr;

    QString action=getActionType(ivalue(0));
    LogPlant* log= new LogPlant(id_log, id_plant, action,  Instruments::getDateTime(svalue(1)));
    return log;
}

QVector<LogPlant> ServerController::getAllLogPlant(int id_plant)
{
    auto str = QString("SELECT id FROM log WHERE inst_id=%0;").arg(id_plant);
    QSqlQuery query(str);

    QVector<LogPlant> logs;

    while(query.next())
    {
        int log_id = ivalue(0);
        LogPlant* log=getLogPlant(log_id, id_plant);
        logs.append(*log);
    }

    return logs;
}

FarmerPlant *ServerController::getFarmerPlant(int id)
{
    auto str = QString("SELECT login, plant_id, stage, created_date, type_id, status, name, avatar FROM farmer_plant WHERE inst_id = %0;").arg(id);
    QSqlQuery query(str);
    if(!query.first())
        return nullptr;
    QString type=getTypePlant(ivalue(4));
    FarmerPlant* farmerPlant= new FarmerPlant(id, svalue(0), ivalue(1), ivalue(2), Instruments::getDateTime(svalue(3)), type,ivalue(5), svalue(6), query.value(7).toByteArray() );
    farmerPlant->mediasPlant=getAllMediaPlant(id);
    farmerPlant->logs=getAllLogPlant(id);

    return farmerPlant;
}

QVector<FarmerPlant> ServerController::getAlFarmerPlant(QString login_Famer)
{
    auto str = QString("SELECT inst_id FROM farmer_plant WHERE login = '%0';").arg(login_Famer);
    QSqlQuery query(str);

    QVector<FarmerPlant> farmerPlants;

    while(query.next())
    {
        int farmerPlant_id = ivalue(0);
        FarmerPlant* farmerPlant=getFarmerPlant(farmerPlant_id);
        farmerPlants.append(*farmerPlant);
    }

    return farmerPlants;
}

Achivement *ServerController::getAchivment(int id_ach, QString login_Farmer)
{
    auto str = QString("SELECT name, info, aim, status, image FROM user_achivements "
                            "JOIN achivements ON id_achivement=id "
                            "WHERE login = '%0' AND id = %1;")
            .arg(login_Farmer).arg(id_ach);
    QSqlQuery query(str);
    if(!query.first())
        return nullptr;
    Achivement* ach= new Achivement(id_ach, svalue(0), svalue(1), ivalue(2), ivalue(3), query.value(4).toByteArray());
    return ach;
}

QVector<Achivement> ServerController::getAllAchivments(QString login_Farmer)
{
    auto str = QString("SELECT id_achivement FROM user_achivements WHERE login = '%0';").arg(login_Farmer);
    QSqlQuery query(str);

    QVector<Achivement> achivements;

    while(query.next())
    {
        int achivement_id = ivalue(0);
        Achivement* achivement=getAchivment(achivement_id, login_Farmer);
        achivements.append(*achivement);
    }

    return achivements;
}


