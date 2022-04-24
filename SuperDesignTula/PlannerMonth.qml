import QtQuick 2.0

Item {
    id: root
    property int cheight: column.height
    width: app_height
    property string textR: "Месяц"
    height: 10+30+items.height

            Column{
                id: column
                width: parent.width
                //anchors.horizontalCenter: root.horizontalCenter
                Item{
                    width: 1
                    height: 10
                }
                Rectangle{
                    y: 10
                    height: 30
                    width: 100
                    radius: 5
                    color: "#f5f5f5"
                    opacity: .7

                    anchors.horizontalCenter: items.horizontalCenter

                    Text{
                        anchors.fill: parent
                        text: textR
                        verticalAlignment: Text.AlignVCenter
                        horizontalAlignment: Text.AlignHCenter
                    }
                }

                Column{
                    id:items
                    spacing: 7
                    Item{
                        width: 1
                        height: 1
                    }

                    Repeater{
                        model: 10
                        TaskPlant{

                        }
                    }

                    Item{
                        width: 1
                        height: 1
                    }
                }
            }
}
