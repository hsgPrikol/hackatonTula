#include "servercontroller.h"

ServerController* ServerController::instance = nullptr;

ServerController::ServerController()
{
    startServer();
}

bool ServerController::startServer()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Tihon/Desktop/sqlitestudio-3.3.3/SQLiteStudio/SuperDataBase");
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
    auto d1=svalue(3);
    auto d2=svalue(4);
    QDateTime registration_date=QDateTime::fromString(d2, "yyyy-MM-dd hh:mm:ss");
    QDate birth_date=QDate::fromString(d1, "dd-MM-yyyy");
    Farmer* user= new Farmer(login,svalue(0), svalue(1), query.value(2).toByteArray(), birth_date, registration_date, ivalue(5), ivalue(6));
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

FarmerPlant *ServerController::getFarmerPlant(int id)
{
    auto str = QString("SELECT login, plant_id, stage, created_date, type_id, status, name, avatar FROM farmer_plant WHERE inst_id = %0;").arg(id);
    QSqlQuery query(str);
    if(!query.first())
        return nullptr;
    auto d2=svalue(3);
    QDateTime created_date=QDateTime::fromString(d2, "yyyy-MM-dd hh:mm:ss");
    QString type=getTypePlant(ivalue(4));
    FarmerPlant* farmerPlant= new FarmerPlant(id, svalue(0), ivalue(1), ivalue(2), created_date, type,ivalue(5), svalue(6), query.value(7).toByteArray() );
    return farmerPlant;
}


