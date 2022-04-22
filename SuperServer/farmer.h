#ifndef FARMER_H
#define FARMER_H

#include <QString>
#include <QByteArray>
#include <QDate>
#include <QDateTime>

class Farmer
{


public:
    QString login;
    QString mail;
    QString user_name;
    QByteArray avatar;
    QDate birth_date;
    QDateTime registration_date;
    int carm;
    int exp;

    Farmer();
    Farmer(QString _login, QString _mail, QString _user_name,  QByteArray _avatar, QDate _birth_date, QDateTime _registration_date, int _carm, int _exp):
    login(_login), mail (_mail), user_name (_user_name),  avatar (_avatar), birth_date (_birth_date), registration_date (_registration_date), carm (_carm), exp (_exp){};
};

#endif // FARMER_H
