#include "instruments.h"


Instruments::Instruments()
{

}

QDate Instruments::getDate(QString dateText)
{
    QDate date;

    if(dateText.contains("-"))
    date=QDate::fromString(dateText, "dd-MM-yyyy");
else
        date=QDate::fromString(dateText.remove(0,3), "MMM dd yyyy");
    return date;
}

QDateTime Instruments::getDateTime(QString dateTimeText)
{
    QDateTime dateTime=QDateTime::fromString(dateTimeText, "yyyy-MM-dd hh:mm:ss");
    return dateTime;
}

QString Instruments::byteArrayToString(QByteArray bytes)
{

}


