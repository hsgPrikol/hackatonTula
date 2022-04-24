import QtQuick 2.0
import QtMultimedia 5.12
import QtQuick.Controls 2.12

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
                text: qsTr("Распознование по фото")
                font.pixelSize: 20
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }
    }

    Rectangle{
        x: 0
        y: 67

        width: 506
        height: 330
        color: "#00000000"
        VideoOutput {
            anchors.fill: parent
            source: camera
        }
    }
    Camera {
        id: camera

        imageCapture {
            onImageCaptured: {

                photoPreview.source = preview
            }
        }
    }
    Rectangle{
        x: 0
        y: 403
        width: 506
        height: 423
        color: "#00000000"

        Image {
            id: photoPreview

            source: img
        }
    }

        Rectangle {
            id: rectangle2
            x: 0
            y: 824
            width: 253
            height: 76
            color: "#3fae51"

            Text {
                id: text2
                x: 0
                y: 0
                width: 253
                height: 76
                color: "#ffffff"
                text: qsTr("Переснять")
                font.pixelSize: 20
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }

            MouseArea {
                id: mouseArea
                x: 0
                y: 0
                width: 245
                height: 76

                onClicked: {
                    camera.imageCapture.capture();
                }
            }
        }

    Rectangle {
        id: rectangle3
        x: 253
        y: 824
        width: 253
        height: 76
        color: "#3fae51"

        Text {
            id: text3
            x: 0
            y: 0
            width: 253
            height: 76
            color: "#ffffff"
            text: qsTr("Далее")
            font.pixelSize: 20
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }

        MouseArea {
            id: mouseArea1
            x: 0
            y: 0
            width: 253
            height: 76

            onClicked: {
                loader.sourceComponent =resultNeuronComponent;
                //добавить новое окно нейронки
            }
        }
    }


}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.75}D{i:12}
}
##^##*/
