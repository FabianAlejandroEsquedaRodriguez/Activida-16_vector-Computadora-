#include <iostream>
#include "Laboratorio.h"

using namespace std;

int main(){
    Laboratorio lab;//En esta instancia, se crea nuestro vector de computadoras
    string opc;

    while(true){
        cout<<"\t\t\tMENU DE OPCIONES\n\n";
        cout<<"1. Agregar Computadora"<<endl;
        cout<<"2. Mostrar"<<endl;    
        cout<<"3. Respaldar"<<endl;    
        cout<<"4. Recuperar"<<endl;    
        cout<<"0. Salir"<<endl<<endl; 

        cout<<"Digita una opcion: ";
        getline(cin, opc);
        system("cls");

        if(opc == "1"){
            Computadora compu;
            cout<<"\t\t\tAGREGAR COMPUTADORA"<<endl<<endl;
            cin>>compu;//La sobrecarga del operador >> ya esta hecha en la clase Computadora

            lab.agregarComputadora(compu);
            cin.ignore();
        }

        else if(opc == "2"){
            lab.mostrar();
        }
        
        else if(opc == "3"){
            lab.respaldar();//Respaldar en un txt
        }
        
        else if(opc == "4"){
            lab.recuperar();
        }

        else if(opc == "0"){
            break;
        }
    
    cout<<"\n\n\n";
    system("pause"); system("cls");
    }


    return 0;
}