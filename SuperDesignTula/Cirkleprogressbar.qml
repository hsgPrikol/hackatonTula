import QtQuick 2.9

Rectangle {
    id: root

    property int size: 150
    property int lineWidth: 5
    property real value: 0

    property color primaryColor: "#e0e0e0"
    property color secondaryColor: "#628395"

    property int animationDuration: 1000

    property var sourceImg
    width: 200
    height: 200

    color: "#00000000"

    onValueChanged: {
        canvas.degree = value * 360;
    }

    Rectangle {
        id: rectangle
        x: 30
        y: 27
        width: 150
        height: 150
        color: "#ffffff"

        Canvas {
            id: canvas

            property real degree: 76


            anchors.fill: parent
            antialiasing: true

            onDegreeChanged: {
                requestPaint();
            }

            onPaint: {
                var ctx = getContext("2d");

                var x = root.width/2;
                var y = root.height/2;

                var radius = root.size/2 - root.lineWidth
                var startAngle = (Math.PI/180) * 270;
                var fullAngle = (Math.PI/180) * (270 + 360);
                var progressAngle = (Math.PI/180) * (270 + degree);

                ctx.reset()

                ctx.lineCap = 'round';
                ctx.lineWidth = root.lineWidth;

                ctx.beginPath();
                ctx.arc(x, y, radius, startAngle, fullAngle);
                ctx.strokeStyle = root.secondaryColor;
                ctx.stroke();

                ctx.beginPath();
                ctx.arc(x, y, radius, startAngle, progressAngle);
                ctx.strokeStyle = root.primaryColor;
                ctx.stroke();
            }

            Image {
                anchors.centerIn: parent
                source: "sourceImg"
            }

            Behavior on degree {
                NumberAnimation {
                    duration: root.animationDuration
                }
            }
        }
    }

    Text {
        id: text1
        x: 0
        y: 0
        width: 200
        height: 26
        text: qsTr("Цветковые")
        font.pixelSize: 12
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    Text {
        id: text2
        x: 1
        y: 178
        width: 199
        height: 22
        color: "#ffffff"
        text: qsTr("140/200")
        font.pixelSize: 12
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }
}

