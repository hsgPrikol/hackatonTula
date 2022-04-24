import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

ApplicationWindow{
    id: root
    //    visibility: ApplicationWindow.FullScreen

    property int selectedIdPlant
    property int selectedIdPlantFarmer

    width: Screen.width
    height: Screen.height
    property int app_width: width
    property int app_height: height
    visible: true
    title: qsTr("Hello World")


color: "#3fae51"




    Component{
        id: resultNeuronComponent

        Resultneuron{

        }
    }

    Component{
        id: cyberShopComponent

        Cybershop{

        }
    }


    Component{
        id: cameraNeuronComponent

        Cameraneuron{

        }
    }


    Component{
        id: settingsComponent

        SettingsProfile{
            id: settingsProfile
        }
    }

    Component{
        id: profileAchivmentComponent

        ProfileAchivments{

        }
    }

    Component{
        id: plantsListComponent

        PlantsList{

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

    Component{
        id: taskPlant
        TaskPlant{

        }
    }

    Component{
        id: plannerComponent
        Planner{

        }
    }

    Component{
        id: articlesComponent
        Articles{

        }
    }

    Component{
        id: plantcreatorComponent
        PlantCreator{

        }
    }

    Component{
        id: cirkleProgressBar

        Cirkleprogressbar{

        }
    }

    Component{
        id: achivmentsComponent

        Achivments{

        }
    }

    Loader{
        id: loader

//        sourceComponent: plantcreator
//        sourceComponent: plantElement
        sourceComponent: autorizationComponent



        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


        //должно быть!
//        sourceComponent: plannerComponent

    }

    Burgermenu{
        id: burgermenu
        x: -app_width
    }

    Component{
        id: pageComponent
        PlantPage{

        }
    }
}
