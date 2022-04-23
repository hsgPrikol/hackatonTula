import QtQuick 2.0
import QtQuick.Controls 2.12

Item {
    id: root
    width: 506
    height: 900

    Rectangle{
        id: header
        width: parent.width
        height: 70
        color: "#3FAE51"
        z: 1
    }

    ScrollView{
        anchors.top: header.bottom
        width: root.width
        height: root.height - header.height

        contentHeight: first.height > second.height? first.height : second.height
        Row{
            Item{
                width: 5
                height: 10
            }
            anchors.horizontalCenter: root.horizontalCenter
            spacing: 10
            Column{
                width: 230
                id: first
                spacing: 7

                Item{
                    width: 1
                    height: 10
                }
                Image {
                    width: parent.width
                    fillMode:Image.PreserveAspectFit
                    source: "qrc:/picture/azalia.png"

                    MouseArea{
                        id: azalia
                        x: 13
                        y: 329
                        width: 209
                        height: 20
                        onClicked: {
                            print("prikol")
                        }
                    }
                }
                Image {
                    width: parent.width
                    fillMode:Image.PreserveAspectFit
                    source: "qrc:/picture/design.png"
                }
                Image {
                    width: parent.width
                    fillMode:Image.PreserveAspectFit
                    source: "qrc:/picture/wet.png"
                }

                Item{
                    width: 1
                    height: 10
                }
            }
            Column{
                width: 230
                id: second
                spacing: 7

                Item{
                    width: 1
                    height: 10
                }
                Image {
                    width: parent.width
                    fillMode:Image.PreserveAspectFit
                    source: "qrc:/picture/weather.png"
                }
                Image {
                    width: parent.width
                    fillMode:Image.PreserveAspectFit
                    source: "qrc:/picture/flowers.png"
                }
                Image {
                    width: parent.width
                    fillMode:Image.PreserveAspectFit
                    source: "qrc:/picture/berry.png"
                }

                Item{
                    width: 1
                    height: 10
                }
            }
        }
    }
}
