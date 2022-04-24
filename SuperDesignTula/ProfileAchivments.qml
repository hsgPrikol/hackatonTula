import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtGraphicalEffects 1.0

Rectangle {
    id: profile

    width: 506
    height: 900
    color: "#00000000"

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
                text: qsTr("Аккаунт")
                font.pixelSize: 20
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }
    }

    ScrollView {
        id: scrollView
        x: 0
        y: 69
        width: 506
        height: 831
        contentHeight: 1000
        contentWidth: parent.width
        clip: true

        Column {
            id: column
            width: 200
            height: 400

            Rectangle {
                id: photo
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

            Achivments {
                id: achivments

            }

        }

    }








}



/*##^##
Designer {
    D{i:0;formeditorZoom:0.66}
}
##^##*/
