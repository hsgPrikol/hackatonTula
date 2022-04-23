import QtQuick 2.0
import QtQuick.Controls 2.12

Item {
    id: root
    width: 506
    height: 900
    Image {
        id: mainPhone
        opacity: 0.6
        anchors.fill: parent
        source: "picture/phone.jpg"
    }

    Rectangle{
        id: header
        width: parent.width
        height: 70
        color: "#3FAE51"
        z: 1
    }
    Rectangle{
        id: background
        anchors.fill: parent
        color: "#D9D9D9"
        opacity: .9
    }
    ScrollView{
        clip: true
        anchors.top: header.bottom
        width: root.width
        height: root.height - header.height

        contentHeight: columnmain.height




        Column{
            id: columnmain
//            spacing: 10
            PlantInfo{

            }
            PlantControl{

            }
            PlantStage{

            }
            PlantPhotos{
                anchors.horizontalCenter: root.horizontalCenter
            }
        }
    }
}
