import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtGraphicalEffects 1.0

Rectangle{
    id: root

    function myGryadki()
    {
//        createChatType = "just_chat"

        loader.sourceComponent = myGryadkiComponent;

        burgermenu.closeNavDrawer();
//        navDrawer.closeNavDrawer()
        console.log("myGryadki")
    }

    function glossariy()
    {
        createChatType = "group_chat"
        loader.sourceComponent = contactsList
        navDrawer.closeNavDrawer()
        console.log("glossariy")
    }

    function calendar()
    {
        createChatType = "private_chat"
        loader.sourceComponent = contactsList
        navDrawer.closeNavDrawer()
        console.log("calendar")
    }

    function achivments()
    {
        createChatType = "non_chat"
        loader.sourceComponent = contactsList
        navDrawer.closeNavDrawer()
        console.log("achivments")
    }

    function forum()
    {
        console.log("forum")
    }


    property var functionMenuElementArray: [myGryadki, glossariy,calendar,achivments,forum]

    property int fontSize: 20
    property int sizeHeightMenuElement: 60
    property int dfltWidthElementMenu: 337
    property color noColor: "#00000000"

    property var textArray: ["Мои грядки", "Глоссарий", "Календарь", "Достижения", "Форум"]
    property var pictureArray: ["qrc:/picture/Mygryadki.png", "qrc:/picture/Glossariy.png", "qrc:/picture/Calendar.png", "qrc:/picture/Achivments.png", "qrc:/picture/Forum.png"]


    width: dfltWidthElementMenu
    height: sizeHeightMenuElement
    color: mouse.containsMouse ? Qt.darker(biruzoviu) : noColor

    Rectangle {
        id: rectangle
        x: 20
        y: 0
        width: 60
        height: 60
        color: "#00000000"

        Image {
            id: image
            height: 30
            anchors.fill: parent

            anchors.leftMargin: 5
            anchors.topMargin: 5
            anchors.rightMargin: 5
            anchors.bottomMargin: 5
            fillMode: Image.PreserveAspectCrop
        }
    }

    Rectangle {
        id: rectangle1
        x: 101
        y: 0
        width: 198
        height: 60
        color: "#00000000"

        Text {
            id: text1
            anchors.fill: parent
            color: "#ffffff"
            font.pixelSize: fontSize
            verticalAlignment: Text.AlignVCenter
        }
    }

    MouseArea{
        id: mouse
        anchors.fill: parent

        hoverEnabled: true

        onClicked: {
            functionMenuElementArray[index]()
        }
    }

    Component.onCompleted: {
        text1.text = textArray[index]
        image.source = pictureArray[index]

    }
}

/*##^##
Designer {
    D{i:0;formeditorZoom:4}
}
##^##*/
