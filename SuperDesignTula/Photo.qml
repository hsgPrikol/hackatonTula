import QtQuick 2.0

Item {
    id: root
    width: app_width - 20
    height: photo.height + 70
    property string description_text: "Описание"

    Rectangle{
        id: background

        width: parent.width
        color: "#3FAE51"
        radius: 20
        height: photo.height + 70

        Column{
            id: column
            anchors.fill: parent



            Text{
                id: day_text
                x: 10
                y: 10
                color: "#ffffff"
                text: "24 апреля"
                font.pointSize: 12
            }
            Text{
                id: time_text
                anchors.right: parent.right
                anchors.rightMargin: 10
                y: 10
                width: 40
                color: "#ffffff"
                text: "9:00"
                font.pointSize: 12
            }
            Image {
                anchors.top: parent.top
                anchors.topMargin: 30
                id: photo
                width: root.width - 20
                anchors.horizontalCenter: parent.horizontalCenter
                fillMode: Image.PreserveAspectFit
                source: "qrc:/picture/Рисунок1.jpg"
            }

            Text{
                id: description
                color: "#ffffff"
                text: description_text
                font.preferShaping: none.none
                anchors.bottom: column.bottom
                font.pointSize: 12
                anchors.bottomMargin: 20
                x: 10
            }
        }
    }
}
