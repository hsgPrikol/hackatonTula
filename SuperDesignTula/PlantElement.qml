import QtQuick 2.0

Item {
    id: root

    width: 500
    height: 150

    Rectangle{
        id: background
        anchors.fill: root
        radius: 25

        color: "#ccf5f5f5"

        Rectangle{
            id: image_background

            property int margin: 13

            height: background.height - margin*2
            width: height
            color: "#f5f5f5"
            radius: margin*2
            anchors.left: parent.left
            anchors.top: parent.top
            anchors.leftMargin: margin
            anchors.topMargin: margin

            Image{
                id: plant_image
                width: image_background.width - 60
                height: width
                anchors.centerIn: image_background
                source: "qrc:/picture/strawberry.png"
            }

            Rectangle{
                id: stage_background
                width: image_background.width/3
                height: width
                color: "#628395"

                radius: 10

                anchors.left: image_background.left
                anchors.bottom: image_background.bottom

                Text{
                    id: stage_text
                    color:"#f5f5f5"
                    font.pixelSize: 23
//                    font.bold: true
                    text: "I"
                    font.family: "Times New Roman"
                    anchors.centerIn: stage_background
                }
            }
        }

        Text{
            id: plant_username
            font.pixelSize: 30
            text: "Клава"
            font.family: "Calibri Light"
            anchors.left:  image_background.right
            anchors.leftMargin: 35
            anchors.top: background.top
            anchors.topMargin: 7
        }

        Text{
            id: plant_name
            font.pixelSize: 20
            text: "Клубника (Земляника)"
            font.family: "Calibri Light"
            color: "#7F7F7F"
            anchors.right: background.right
            anchors.rightMargin: 25
            anchors.top: background.top
            anchors.topMargin: 40
        }
    }
}
