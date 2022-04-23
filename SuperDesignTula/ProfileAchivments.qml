import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtGraphicalEffects 1.0

Rectangle {
    id: profile

    width: 506
    height: 900

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
                x: 0
                y: 0
                width: 70
                height: 70
                source: "picture/arrow.tif"
                fillMode: Image.PreserveAspectFit
            }
        }

        Rectangle {
            id: rectangle1
            x: 93
            y: 0
            width: 405
            height: 70
            color: "#3fae51"

            Text {
                id: text1
                x: 8
                y: 0
                width: 303
                height: 70
                color: "#ffffff"
                text: qsTr("Text")
                font.pixelSize: 16
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }
    }

    Rectangle {
        id: photo
        x: 0
        y: 71
        width: 506
        height: 314
        color: "#ffffff"

        Image {
            id: image
            x: 0
            y: 0
            width: 506
            height: 314
            source: "qrc:/qtquickplugin/images/template_image.png"
            fillMode: Image.PreserveAspectFit
        }
    }

    Rectangle {
        id: achivments
        x: 0
        y: 384
        width: 506
        height: 516
        color: "#3fae51"

        Text {
            id: text2
            x: 0
            y: 0
            width: 506
            height: 50
            color: "#ffffff"
            text: qsTr("Дата регистрации\\n12.04.2022")
            font.pixelSize: 16
            verticalAlignment: Text.AlignTop

            Text {
                id: text3
                x: 202
                y: 48
                width: 102
                height: 20
                color: "#ffffff"
                text: qsTr("Уровень: 5")
                font.pixelSize: 16
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }

        ProgressBar {
            id: progressBar
            x: 119
            y: 69
            width: 268
            height: 36
            value: 0.5
        }

        Text {
            id: text4
            x: 219
            y: 106
            width: 68
            height: 28
            color: "#ffffff"
            text: qsTr("270/350")
            font.pixelSize: 16
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }



        Rectangle {
            id: hatAccountMask
            height: 50
            color: "#00000000"


            property var nameText: "Аккаунт"
            x: 0
            y: 140
            width: 506
            Text {

                x: 191
                y: 0
                width: 125
                height: 50
                color: "#ffffff"
                text: "Найденные растения"
                font.pixelSize: 18
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }

            Rectangle {

                x: 8
                y: 24
                width: 142
                height: 2
                color: "#ffffff"
            }

            Rectangle {

                x: 348
                y: 24
                width: 151
                height: 2
                color: "#ffffff"
            }
        }
    }



}


