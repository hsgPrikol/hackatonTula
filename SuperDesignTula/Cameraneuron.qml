import QtQuick 2.0
import QtMultimedia 5.12
import QtQuick.Controls 2.12

Rectangle {
    width: 506
    height: 900

    color: "#00000000"
    property var img

    VideoOutput {
        anchors.fill: parent
        source: camera
    }

    Camera {
        id: camera

        imageCapture {
            onImageCaptured: {
                // Show the preview in an Image
                photoPreview.source = preview
            }
        }
    }

    Column{

        Button{
            text: "we"
            onClicked: {
                camera.imageCapture.capture();
            }
        }

        Rectangle{
            width: 100
            height: 100
            color: "red"
            Image {
                id: photoPreview
            }
        }
    }

}
