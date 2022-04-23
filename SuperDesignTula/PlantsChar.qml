import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtGraphicalEffects 1.0

Rectangle {
    id: root

    property int dfltWidth: 506
    property int dfltHeight: 100
    property color noColor: "#00000000"
    property real customOpacity: 0.7
    property color biruzoviu: "#3fae51"

    property int fontSize: 20

    property int indexRepeaterChar: 0
    property string textRepeaterChar: "s"

    property int dfltHeightContactList: 84
    property var tmpContactName

    property var testList: []

    width: dfltWidth
    height: dfltHeight * testList.length
//        border.width: 1
//        border.color: "white"

    color: noColor

    function loadContactsInChar(){
        for(var i = 0; i < columnContactList.data.length;i++)
        {
            columnContactList.data[i].destroy()
        }

        var countD = clientData.getCountContactsInMap(textRepeaterChar);

        var tmp;


        var list = []

        var counter = 0

        for(var i=0;i<countD;i++){
            if (clientData.getLoginContact(textRepeaterChar, i) != clientData.getCurrentLogin()){
                tmp = tmpContactName.createObject(columnContactList,
                                                  {
                                                      nameContact: clientData.getNameContact(textRepeaterChar, i),
                                                      indexContact: i,

                                                      pathAvatarContact: clientData.getPathAvatarContact(textRepeaterChar, i) != ""?"file:///" +currentDir+"/" + clientData.getPathAvatarContact(textRepeaterChar, i):"qrc:/resourses/avatar/cop.tif",
                                                      login: clientData.getLoginContact(textRepeaterChar, i)
                                                      //                                                   textRepeaterContactsName: contactsss.getName(i)
                                                  });
                counter++
            }
        }

        if(counter == 0)
            root.visible = false

        rootLineCharList.height= countD * dfltHeightContactList - 50
    }

    Rectangle {
        id: rootCharContact
        width: 50
        height: 50
        color: noColor

        Text {
            id: rootCharContactText
            color: "#ffffff"
            anchors.fill: parent
            text: textRepeaterChar
            font.pixelSize: fontSize
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter

            Component.onCompleted: {
                // console.log("textRepeaterChar", textRepeaterChar)
            }
        }
    }

    Column {
        id: columnContactList
        y:30

        Repeater{
            model: testList.length
            PlantProfile{


                nameContact: testList[index]
                indexContact: index
            }
        }
    }

    Rectangle {
        id: rootLineCharList
        y: 0
        anchors.top: rootCharContact.bottom
        anchors.topMargin: 10
        anchors.bottomMargin: 10
        anchors.horizontalCenter: rootCharContact.horizontalCenter
        width: 2

        height: testList.length * dfltHeightContactList - 50
        color: "#ffffff"
    }

    Component.onCompleted: {
        tmpContactName= Qt.createComponent("ContactPageMain.qml");
        console.log("s")
//        loadContactsInChar();
    }

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}

/*##^##
Designer {
    D{i:0;formeditorZoom:1.5}
}
##^##*/
