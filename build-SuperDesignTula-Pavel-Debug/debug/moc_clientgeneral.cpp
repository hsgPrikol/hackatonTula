/****************************************************************************
** Meta object code from reading C++ file 'clientgeneral.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../tula_hack/Client/clientgeneral.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientgeneral.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientGeneral_t {
    QByteArrayData data[84];
    char stringdata0[1286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientGeneral_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientGeneral_t qt_meta_stringdata_ClientGeneral = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClientGeneral"
QT_MOC_LITERAL(1, 14, 21), // "onAnswerAuthorization"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "result"
QT_MOC_LITERAL(4, 44, 20), // "onAnswerRegistration"
QT_MOC_LITERAL(5, 65, 28), // "onAnswerInformationAboutUser"
QT_MOC_LITERAL(6, 94, 18), // "onAnswerPlantsUser"
QT_MOC_LITERAL(7, 113, 27), // "onAnswerAllDataFromGlossary"
QT_MOC_LITERAL(8, 141, 16), // "onAnswerUserTask"
QT_MOC_LITERAL(9, 158, 30), // "onAnswerMediaForFarmerPlantAll"
QT_MOC_LITERAL(10, 189, 18), // "onAnswerLogForUser"
QT_MOC_LITERAL(11, 208, 30), // "onAnswerAllDataAchivementsUser"
QT_MOC_LITERAL(12, 239, 16), // "onAddPlantFarmer"
QT_MOC_LITERAL(13, 256, 2), // "id"
QT_MOC_LITERAL(14, 259, 9), // "namePlant"
QT_MOC_LITERAL(15, 269, 8), // "plant_id"
QT_MOC_LITERAL(16, 278, 5), // "stage"
QT_MOC_LITERAL(17, 284, 11), // "createdDate"
QT_MOC_LITERAL(18, 296, 7), // "tipe_id"
QT_MOC_LITERAL(19, 304, 6), // "status"
QT_MOC_LITERAL(20, 311, 4), // "name"
QT_MOC_LITERAL(21, 316, 10), // "pathAvatar"
QT_MOC_LITERAL(22, 327, 10), // "onAddPlant"
QT_MOC_LITERAL(23, 338, 15), // "pathDescription"
QT_MOC_LITERAL(24, 354, 8), // "pathInfo"
QT_MOC_LITERAL(25, 363, 17), // "sendAuthorization"
QT_MOC_LITERAL(26, 381, 5), // "login"
QT_MOC_LITERAL(27, 387, 8), // "password"
QT_MOC_LITERAL(28, 396, 16), // "sendRegistration"
QT_MOC_LITERAL(29, 413, 5), // "email"
QT_MOC_LITERAL(30, 419, 27), // "sendGetInformationAboutUser"
QT_MOC_LITERAL(31, 447, 17), // "sendGetPlantsUser"
QT_MOC_LITERAL(32, 465, 19), // "sendAddPlantForUser"
QT_MOC_LITERAL(33, 485, 10), // "typeGround"
QT_MOC_LITERAL(34, 496, 7), // "idPlant"
QT_MOC_LITERAL(35, 504, 6), // "avatar"
QT_MOC_LITERAL(36, 511, 25), // "sendGetNameIdFromGlossary"
QT_MOC_LITERAL(37, 537, 30), // "sendGetDescriptionFromGlossary"
QT_MOC_LITERAL(38, 568, 27), // "sendGetCareInfoFromGlossary"
QT_MOC_LITERAL(39, 596, 25), // "sendGetAvatarFromGlossary"
QT_MOC_LITERAL(40, 622, 26), // "sendGetAllDataFromGlossary"
QT_MOC_LITERAL(41, 649, 15), // "sendGetUserTask"
QT_MOC_LITERAL(42, 665, 15), // "sendAddUserTask"
QT_MOC_LITERAL(43, 681, 4), // "text"
QT_MOC_LITERAL(44, 686, 8), // "datetime"
QT_MOC_LITERAL(45, 695, 29), // "sendGetMediaForFarmerPlantAll"
QT_MOC_LITERAL(46, 725, 29), // "sendGetMediaForFarmerPlantOne"
QT_MOC_LITERAL(47, 755, 7), // "idMedia"
QT_MOC_LITERAL(48, 763, 26), // "sendAddMediaForFarmerPlant"
QT_MOC_LITERAL(49, 790, 11), // "description"
QT_MOC_LITERAL(50, 802, 5), // "image"
QT_MOC_LITERAL(51, 808, 6), // "instID"
QT_MOC_LITERAL(52, 815, 17), // "sendGetLogForUser"
QT_MOC_LITERAL(53, 833, 18), // "sendGetLogForPlant"
QT_MOC_LITERAL(54, 852, 10), // "sendAddLog"
QT_MOC_LITERAL(55, 863, 8), // "idAction"
QT_MOC_LITERAL(56, 872, 22), // "sendGetAchivementsUser"
QT_MOC_LITERAL(57, 895, 26), // "sendGetInfoAboutAchivement"
QT_MOC_LITERAL(58, 922, 29), // "sendGetAllDataAchivementsUser"
QT_MOC_LITERAL(59, 952, 14), // "setStatusPlant"
QT_MOC_LITERAL(60, 967, 14), // "newValueStatus"
QT_MOC_LITERAL(61, 982, 13), // "setStagePlant"
QT_MOC_LITERAL(62, 996, 13), // "newValueStage"
QT_MOC_LITERAL(63, 1010, 16), // "emitPlantsFarmer"
QT_MOC_LITERAL(64, 1027, 12), // "loadGlossary"
QT_MOC_LITERAL(65, 1040, 13), // "getPathForQML"
QT_MOC_LITERAL(66, 1054, 4), // "path"
QT_MOC_LITERAL(67, 1059, 12), // "getNamePlant"
QT_MOC_LITERAL(68, 1072, 8), // "id_plant"
QT_MOC_LITERAL(69, 1081, 14), // "getAvatarPlant"
QT_MOC_LITERAL(70, 1096, 9), // "getMyName"
QT_MOC_LITERAL(71, 1106, 11), // "getMyAvatar"
QT_MOC_LITERAL(72, 1118, 10), // "getMyLogin"
QT_MOC_LITERAL(73, 1129, 8), // "getMyExp"
QT_MOC_LITERAL(74, 1138, 8), // "getMyLvl"
QT_MOC_LITERAL(75, 1147, 15), // "getExpToNextLvl"
QT_MOC_LITERAL(76, 1163, 14), // "getMyBirthDate"
QT_MOC_LITERAL(77, 1178, 15), // "getMyCreateDate"
QT_MOC_LITERAL(78, 1194, 18), // "getCountCharPlants"
QT_MOC_LITERAL(79, 1213, 21), // "getCharPlantsForIndex"
QT_MOC_LITERAL(80, 1235, 5), // "index"
QT_MOC_LITERAL(81, 1241, 20), // "getCountPlantsinChar"
QT_MOC_LITERAL(82, 1262, 21), // "getPlantsForIndexChar"
QT_MOC_LITERAL(83, 1284, 1) // "c"

    },
    "ClientGeneral\0onAnswerAuthorization\0"
    "\0result\0onAnswerRegistration\0"
    "onAnswerInformationAboutUser\0"
    "onAnswerPlantsUser\0onAnswerAllDataFromGlossary\0"
    "onAnswerUserTask\0onAnswerMediaForFarmerPlantAll\0"
    "onAnswerLogForUser\0onAnswerAllDataAchivementsUser\0"
    "onAddPlantFarmer\0id\0namePlant\0plant_id\0"
    "stage\0createdDate\0tipe_id\0status\0name\0"
    "pathAvatar\0onAddPlant\0pathDescription\0"
    "pathInfo\0sendAuthorization\0login\0"
    "password\0sendRegistration\0email\0"
    "sendGetInformationAboutUser\0"
    "sendGetPlantsUser\0sendAddPlantForUser\0"
    "typeGround\0idPlant\0avatar\0"
    "sendGetNameIdFromGlossary\0"
    "sendGetDescriptionFromGlossary\0"
    "sendGetCareInfoFromGlossary\0"
    "sendGetAvatarFromGlossary\0"
    "sendGetAllDataFromGlossary\0sendGetUserTask\0"
    "sendAddUserTask\0text\0datetime\0"
    "sendGetMediaForFarmerPlantAll\0"
    "sendGetMediaForFarmerPlantOne\0idMedia\0"
    "sendAddMediaForFarmerPlant\0description\0"
    "image\0instID\0sendGetLogForUser\0"
    "sendGetLogForPlant\0sendAddLog\0idAction\0"
    "sendGetAchivementsUser\0"
    "sendGetInfoAboutAchivement\0"
    "sendGetAllDataAchivementsUser\0"
    "setStatusPlant\0newValueStatus\0"
    "setStagePlant\0newValueStage\0"
    "emitPlantsFarmer\0loadGlossary\0"
    "getPathForQML\0path\0getNamePlant\0"
    "id_plant\0getAvatarPlant\0getMyName\0"
    "getMyAvatar\0getMyLogin\0getMyExp\0"
    "getMyLvl\0getExpToNextLvl\0getMyBirthDate\0"
    "getMyCreateDate\0getCountCharPlants\0"
    "getCharPlantsForIndex\0index\0"
    "getCountPlantsinChar\0getPlantsForIndexChar\0"
    "c"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientGeneral[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  269,    2, 0x06 /* Public */,
       4,    1,  272,    2, 0x06 /* Public */,
       5,    0,  275,    2, 0x06 /* Public */,
       6,    0,  276,    2, 0x06 /* Public */,
       7,    0,  277,    2, 0x06 /* Public */,
       8,    0,  278,    2, 0x06 /* Public */,
       9,    0,  279,    2, 0x06 /* Public */,
      10,    0,  280,    2, 0x06 /* Public */,
      11,    0,  281,    2, 0x06 /* Public */,
      12,    9,  282,    2, 0x06 /* Public */,
      22,    5,  301,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    2,  312,    2, 0x0a /* Public */,
      28,    3,  317,    2, 0x0a /* Public */,
      30,    0,  324,    2, 0x0a /* Public */,
      31,    0,  325,    2, 0x0a /* Public */,
      32,    5,  326,    2, 0x0a /* Public */,
      36,    0,  337,    2, 0x0a /* Public */,
      37,    1,  338,    2, 0x0a /* Public */,
      38,    1,  341,    2, 0x0a /* Public */,
      39,    1,  344,    2, 0x0a /* Public */,
      40,    0,  347,    2, 0x0a /* Public */,
      41,    0,  348,    2, 0x0a /* Public */,
      42,    3,  349,    2, 0x0a /* Public */,
      45,    1,  356,    2, 0x0a /* Public */,
      46,    1,  359,    2, 0x0a /* Public */,
      48,    3,  362,    2, 0x0a /* Public */,
      52,    0,  369,    2, 0x0a /* Public */,
      53,    1,  370,    2, 0x0a /* Public */,
      54,    4,  373,    2, 0x0a /* Public */,
      56,    0,  382,    2, 0x0a /* Public */,
      57,    1,  383,    2, 0x0a /* Public */,
      58,    0,  386,    2, 0x0a /* Public */,
      59,    2,  387,    2, 0x0a /* Public */,
      61,    2,  392,    2, 0x0a /* Public */,
      63,    0,  397,    2, 0x0a /* Public */,
      64,    0,  398,    2, 0x0a /* Public */,
      65,    1,  399,    2, 0x0a /* Public */,
      67,    1,  402,    2, 0x0a /* Public */,
      69,    1,  405,    2, 0x0a /* Public */,
      70,    0,  408,    2, 0x0a /* Public */,
      71,    0,  409,    2, 0x0a /* Public */,
      72,    0,  410,    2, 0x0a /* Public */,
      73,    0,  411,    2, 0x0a /* Public */,
      74,    0,  412,    2, 0x0a /* Public */,
      75,    0,  413,    2, 0x0a /* Public */,
      76,    0,  414,    2, 0x0a /* Public */,
      77,    0,  415,    2, 0x0a /* Public */,
      78,    0,  416,    2, 0x0a /* Public */,
      79,    1,  417,    2, 0x0a /* Public */,
      81,    1,  420,    2, 0x0a /* Public */,
      82,    2,  423,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,   13,   14,   15,   16,   17,   18,   19,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,   20,   23,   24,   21,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   26,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   26,   27,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   33,   34,   20,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   26,   43,   44,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   49,   50,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   26,   34,   55,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   51,   60,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   51,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,   66,
    QMetaType::QString, QMetaType::Int,   68,
    QMetaType::QString, QMetaType::Int,   68,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::QString, QMetaType::Int,   80,
    QMetaType::Int, QMetaType::Int,   80,
    QMetaType::Int, QMetaType::QString, QMetaType::Int,   83,   80,

       0        // eod
};

void ClientGeneral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientGeneral *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAnswerAuthorization((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onAnswerRegistration((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onAnswerInformationAboutUser(); break;
        case 3: _t->onAnswerPlantsUser(); break;
        case 4: _t->onAnswerAllDataFromGlossary(); break;
        case 5: _t->onAnswerUserTask(); break;
        case 6: _t->onAnswerMediaForFarmerPlantAll(); break;
        case 7: _t->onAnswerLogForUser(); break;
        case 8: _t->onAnswerAllDataAchivementsUser(); break;
        case 9: _t->onAddPlantFarmer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9]))); break;
        case 10: _t->onAddPlant((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 11: _t->sendAuthorization((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->sendRegistration((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 13: _t->sendGetInformationAboutUser(); break;
        case 14: _t->sendGetPlantsUser(); break;
        case 15: _t->sendAddPlantForUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 16: _t->sendGetNameIdFromGlossary(); break;
        case 17: _t->sendGetDescriptionFromGlossary((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->sendGetCareInfoFromGlossary((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->sendGetAvatarFromGlossary((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->sendGetAllDataFromGlossary(); break;
        case 21: _t->sendGetUserTask(); break;
        case 22: _t->sendAddUserTask((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 23: _t->sendGetMediaForFarmerPlantAll((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->sendGetMediaForFarmerPlantOne((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->sendAddMediaForFarmerPlant((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 26: _t->sendGetLogForUser(); break;
        case 27: _t->sendGetLogForPlant((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->sendAddLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 29: _t->sendGetAchivementsUser(); break;
        case 30: _t->sendGetInfoAboutAchivement((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->sendGetAllDataAchivementsUser(); break;
        case 32: _t->setStatusPlant((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 33: _t->setStagePlant((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 34: _t->emitPlantsFarmer(); break;
        case 35: _t->loadGlossary(); break;
        case 36: { QString _r = _t->getPathForQML((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 37: { QString _r = _t->getNamePlant((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 38: { QString _r = _t->getAvatarPlant((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 39: { QString _r = _t->getMyName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 40: { QString _r = _t->getMyAvatar();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 41: { QString _r = _t->getMyLogin();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 42: { int _r = _t->getMyExp();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 43: { int _r = _t->getMyLvl();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 44: { int _r = _t->getExpToNextLvl();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 45: { QString _r = _t->getMyBirthDate();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 46: { QString _r = _t->getMyCreateDate();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 47: { int _r = _t->getCountCharPlants();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 48: { QString _r = _t->getCharPlantsForIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 49: { int _r = _t->getCountPlantsinChar((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 50: { int _r = _t->getPlantsForIndexChar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientGeneral::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAnswerAuthorization)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientGeneral::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAnswerRegistration)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientGeneral::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAnswerInformationAboutUser)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientGeneral::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAnswerPlantsUser)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientGeneral::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAnswerAllDataFromGlossary)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientGeneral::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAnswerUserTask)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ClientGeneral::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAnswerMediaForFarmerPlantAll)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ClientGeneral::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAnswerLogForUser)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ClientGeneral::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAnswerAllDataAchivementsUser)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ClientGeneral::*)(int , QString , int , int , QString , int , int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAddPlantFarmer)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ClientGeneral::*)(int , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientGeneral::onAddPlant)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientGeneral::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ClientGeneral.data,
    qt_meta_data_ClientGeneral,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientGeneral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientGeneral::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientGeneral.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientGeneral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void ClientGeneral::onAnswerAuthorization(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientGeneral::onAnswerRegistration(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientGeneral::onAnswerInformationAboutUser()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ClientGeneral::onAnswerPlantsUser()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ClientGeneral::onAnswerAllDataFromGlossary()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ClientGeneral::onAnswerUserTask()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ClientGeneral::onAnswerMediaForFarmerPlantAll()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ClientGeneral::onAnswerLogForUser()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ClientGeneral::onAnswerAllDataAchivementsUser()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ClientGeneral::onAddPlantFarmer(int _t1, QString _t2, int _t3, int _t4, QString _t5, int _t6, int _t7, QString _t8, QString _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ClientGeneral::onAddPlant(int _t1, QString _t2, QString _t3, QString _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
