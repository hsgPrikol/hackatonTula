#include "instruments.h"


Instruments::Instruments()
{

}

QDate Instruments::getDate(QString dateText)
{
    QDate date=QDate::fromString(dateText, "dd-MM-yyyy");
    return date;
}

QDateTime Instruments::getDateTime(QString dateTimeText)
{
    QDateTime dateTime=QDateTime::fromString(dateTimeText, "yyyy-MM-dd hh:mm:ss");
    return dateTime;
}
