import QtQuick 2.0
import QtQuick.Controls 2.12

Item {
    id: root
    width: 506
    height: 900
    property string icon_path: "qrc:/picture/strawberry.tif"

    Rectangle{
        id: header
        width: parent.width
        height: 70
        color: "#3FAE51"
        z: 1
    }

    Rectangle{
        id: image_background

        anchors.top: header.bottom
        anchors.topMargin: 25

        anchors.horizontalCenter: header.horizontalCenter

        property int margin: 13

        height: header.width/2
        width: height
        color: "#f5f5f5"
        radius: margin*2
//                    anchors.bottom: element_column.bottom
//                    anchors.bottomMargin: margin

//                    anchors.left: element_column.left
//                    anchors.leftMargin: margin

        Image{
            id: plant_image
            width: image_background.width - 60
            height: width
            anchors.centerIn: image_background
            source: icon_path
        }
    }


    Text {
        id: plant_name
        anchors.top: image_background.bottom
        anchors.topMargin: 25
        anchors.horizontalCenter: root.horizontalCenter
        text: qsTr("Азалия")
        color: "#f5f5f5"
        font.pixelSize: 35
    }


    TextField{
        id: name_textfield
        width: root.width - 100
        height: 45
        horizontalAlignment: Text.AlignLeft

        anchors.top: plant_name.bottom
        anchors.topMargin: 30
        anchors.horizontalCenter: root.horizontalCenter

        placeholderText: "Имя"

        color: "#f5f5f5"
        font.pixelSize: 15

        background: Rectangle{
            color: "#3FAE51"
            radius: 10
            opacity: .7
        }
    }

    ComboBox{
        id: type_combobox
        width: root.width - 100
        height: 45
        anchors.top: name_textfield.bottom
        anchors.topMargin: 15
        anchors.horizontalCenter: root.horizontalCenter
        model: ["Открытый грунт","Закрытый грунт"]
        displayText: "Тип грунта: " + currentText
        background: Rectangle{
            color: "#3FAE51"
            radius: 10
            opacity: .7
        }
        contentItem: Text{
            font.pixelSize: 15
            color: "#f5f5f5"
            text: type_combobox.displayText
            verticalAlignment: Text.AlignVCenter
            anchors.left: type_combobox.left
            anchors.leftMargin: 10
        }
    }


    ComboBox{
        id: stage_combobox
        width: root.width - 100
        height: 45
        anchors.top: type_combobox.bottom
        anchors.topMargin: 15
        anchors.horizontalCenter: root.horizontalCenter
        model: ["I. Семя","II. Зародыш","III. Проросток","IV. Растение"]
        displayText: "Стадия роста: " + currentText
        background: Rectangle{
            color: "#3FAE51"
            radius: 10
            opacity: .7
        }
        contentItem: Text{
            font.pixelSize: 15
            color: "#f5f5f5"
            text: stage_combobox.displayText
            verticalAlignment: Text.AlignVCenter
            anchors.left: stage_combobox.left
            anchors.leftMargin: 10
        }
    }


    ComboBox{
        id: control_combobox
        width: root.width - 100
        height: 45
        anchors.top: stage_combobox.bottom
        anchors.topMargin: 15
        anchors.horizontalCenter: root.horizontalCenter
        model: ["OJ12 RealTime","OJ4 RealTime", "Нет"]
        displayText: "Устройство контроля: " + currentText
        background: Rectangle{
            color: "#3FAE51"
            radius: 10
            opacity: .7
        }
        contentItem: Text{
            font.pixelSize: 15
            color: "#f5f5f5"
            text: control_combobox.displayText
            verticalAlignment: Text.AlignVCenter
            anchors.left: control_combobox.left
            anchors.leftMargin: 10
        }
    }

    Rectangle {
        id: button
        visible: is_active
        width: 150
        height: 40
        color: mouseArea.containsPress ? Qt.darker("#3fae51") : "#3fae51"
        radius: button.height / 4
        opacity: 0.9
        anchors.horizontalCenter: root.horizontalCenter


        anchors.top: control_combobox.bottom
        anchors.topMargin: 15

        Text {
            color: "#f5f5f5"
            text: "Добавить"
            font.pixelSize: 20
            anchors.fill: parent
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }

        MouseArea {
            id: mouseArea
            anchors.fill: button
            //hoverEnabled: true
        }
    }
}
