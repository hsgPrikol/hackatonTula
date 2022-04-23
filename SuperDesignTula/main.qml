import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

ApplicationWindow{
    id: root
//    visibility: ApplicationWindow.FullScreen

    width: 506
    height: 900
    visible: true
    title: qsTr("Hello World")


color: "black"

    Component{
        id: settingsComponent

        SettingsProfile{
            id: settingsProfile
        }
    }


    Component{
        id: registrationComponent

        Registration{
            id: registration
        }
    }

    Component{
        id: autorizationComponent

        Autorization {
            id: autorization
        }
    }

    Component{
        id: plantElement

        PlantElement{

        }
    }

    Component{
        id: taskPlant
        TaskPlant{

        }
    }

    Component{
        id: planner
        Planner{

        }
    }

    Component{
        id: articles
        Articles{

        }
    }

    Component{
        id: plantcreator
        PlantCreator{

        }
    }

    Loader{
        id: loader

        sourceComponent: page
    }

    Component{
        id: burgermenuComponent

        Burgermenu{
            id: burgermenu
        }
    }

    Component{
        id: page
        PlantPage{

        }
    }
}
