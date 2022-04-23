#ifndef INSTRUMENTS_H
#define INSTRUMENTS_H

#include <QString>
#include <QByteArray>
#include <QVector>
#include <QDate>
#include <QDateTime>
#include <QDebug>

class Instruments
{
public:
    Instruments();
    static QDate getDate(QString date);
    static QDateTime getDateTime(QString dateTime);
};

#endif // INSTRUMENTS_H
