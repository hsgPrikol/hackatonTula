import QtQuick 2.0
import QtQuick.Controls 2.15

Rectangle {
    width: 506
    height: 900

    color: "#f4f5f6"
    property var img

    Rectangle {
        id: header
        x: 0
        y: 0
        width: 506
        height: 70
        color: "#3fae51"

        Rectangle {
            id: rectangle
            x: 17
            y: 0
            width: 70
            height: 70
            color: "#3fae51"

            Image {
                id: arrow
                x: 13
                y: 20
                width: 44
                height: 31
                source: "qrc:/picture/arrow.tif"
                fillMode: Image.PreserveAspectFit

                MouseArea{
                    anchors.fill: parent

                    onClicked: {
                        loader.sourceComponent = plannerComponent
                    }
                }
            }
        }

        Text {
            id: text1
            x: 162
            y: 0
            width: 182
            height: 70
            color: "#ffffff"
            text: qsTr("Распознать по фото")
            font.pixelSize: 20
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
    }

    Rectangle {
        id: rectangle1
        x: 0
        y: 68
        width: 506
        height: 832
        color: "#7f7f7f"

        Text {
            id: text2
            x: 110
            y: 60
            width: 274
            height: 69
            color: "#ffffff"
            text: qsTr("С вероятностью")
            font.pixelSize: 20
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }

        Text {
            id: text3
            x: 110
            y: 135
            width: 274
            height: 64
            color: "#ffffff"
            text: qsTr("99 %")
            font.pixelSize: 20
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            textFormat: Text.RichText
        }

        Text {
            id: text4
            x: 110
            y: 205
            width: 274
            height: 93
            color: "#ffffff"
            text: qsTr("это")
            font.pixelSize: 20
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }

        Image {
            id: image
            x: 110
            y: 304
            width: 274
            height: 184
            source: "qrc:/qtquickplugin/images/template_image.png"
            fillMode: Image.PreserveAspectFit
        }

        Text {
            id: text5
            x: 110
            y: 494
            width: 274
            height: 93
            color: "#ffffff"
            text: qsTr("это")
            font.pixelSize: 20
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }

        Text {
            id: text6
            x: 24
            y: 593
            width: 459
            height: 181
            color: "#ffffff"
            text: qsTr("Text")
            elide: Text.ElideRight
            font.pixelSize: 16
            horizontalAlignment: Text.AlignLeft
            verticalAlignment: Text.AlignTop
            wrapMode: Text.Wrap
        }

        Text {
            id: text7
            x: 24
            y: 780
            width: 459
            height: 44
            color: "#ffffff"
            text: qsTr("Ссылку")
            elide: Text.ElideRight
            font.pixelSize: 16
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.underline: true
        }
    }
}
