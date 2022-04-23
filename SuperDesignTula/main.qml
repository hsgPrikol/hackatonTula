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

    Loader{
        id: loader

        sourceComponent: autorizationComponent
    }

    Component{
        id: burgermenuComponent

        Burgermenu{
            id: burgermenu
        }
    }
}
