import QtQuick 2.0

Item {
    id: root

    width: app_width
    height: column.height

    Rectangle {
        id: hatAccountMask
        width: dfltWidth
        height: 50
        color: "#00000000"


        property var nameText: "Устройство контроля"
        x: 0
        y: 0
        Text {
            id: text1
            x: 191
            y: 0
            width: 125
            height: 50
            text: "Фото"
            font.pixelSize: 18
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }

        Rectangle {
            id: rectangle1
            x: 8
            y: 24
            width: 148
            height: 2
            color: "black"
        }

        Rectangle {
            id: rectangle2
            x: 355
            y: 24
            width: 144
            height: 2
            color: "black"
        }
    }


    Column{
        anchors.horizontalCenter: root.horizontalCenter
        id: column
        spacing: 30


        Item{
            width: 1
            height: 30
        }


        Repeater{
            id: repeater
            model: 5
            Photo{
                description_text: index
            }
        }
    }
}
