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
        //        anchors.left: root.left
        //        anchors.leftMargin: 13
        anchors.top: header.bottom
        width: root.width
        height: root.height - header.height

        contentHeight: month.cheight
    Column{
        spacing: 10
        Repeater{
            model: 3
            PlannerMonth{
                id: month
                textR: "fddf" + index
}}
        }
    }
}
