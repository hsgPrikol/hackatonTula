#include <QCoreApplication>
#include <QtDebug>
#include "servercontroller.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   ServerController* controller = ServerController::getInstance();

    int a1=controller->confirmAuthorization("maksim","123");
    int a2=controller->confirmAuthorization("maksim","1234");

    Farmer* a3= controller->getUser("maksim");

    Plant* a4=controller->getPlant(1);
    auto a5=controller->getAllPlant();

    auto a6=controller->getFarmerPlant(1);
    return a.exec();
}
