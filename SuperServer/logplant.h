#ifndef LOGPLANT_H
#define LOGPLANT_H

#include <instruments.h>

class LogPlant
{
public:
 int id;
 int inst_id;
 QString action;
 QDateTime dateTime;

    LogPlant();
    LogPlant( int _id, int _inst_id,QString _action,QDateTime _dateTime):
        id (_id), inst_id (_inst_id),action (_action),dateTime (_dateTime) {};
};

#endif // LOGPLANT_H
