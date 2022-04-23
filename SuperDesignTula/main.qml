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
        id: myGryadkiComponent

        MyGryadki{
            id: myGryadki
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

    Loader{
        id: loader

        sourceComponent: plantElement
        sourceComponent: myGryadkiComponent
    }

    Burgermenu{
        id: burgermenu
        x: -506
    }
}
