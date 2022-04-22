#ifndef SERVERCONTROLLER_H
#define SERVERCONTROLLER_H
#define svalue(a) query.value(a).toString()
#define ivalue(a) query.value(a).toInt()
#define tostr(a) QString::number(a)

#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QDebug>
#include "farmer.h"

class ServerController
{
private:
    QSqlDatabase db;
    static ServerController* instance;
    bool startServer();
public:
    ServerController();
    static ServerController * getInstance();

    int confirmAuthorization(QString login, QString passhash);
    Farmer* getUser(QString login);
};

#endif // SERVERCONTROLLER_H
