import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

ApplicationWindow{
    id: root
    //    visibility: ApplicationWindow.FullScreen

    property int selectedIdPlant

    width: 506
    height: 900
    visible: true
    title: qsTr("Hello World")


color: "#3fae51"

property var img_camera_neuron
property var plant_name_camera_neuron
property var probability_camera_neuron
property var url_camera_neuron
property var value_camera_neuron


    Component{
        id: resultNeuronComponent

        Resultneuron{
//            id:resultNeuron

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
        x: -506
    }

    Component{
        id: pageComponent
        PlantPage{

        }
    }
}
