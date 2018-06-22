#include <iostream>
#include "Persona.h"
#include <vector>

using namespace std;

int main() {
    int opcion;
    vector<Persona*> person;
	do{
		cout<<"Bienvenido al Menu de Opciones"<<endl;
		cout<<"1.- Agregar Personas"<<endl;
		cout<<"2.- Eliminar Personas"<<endl;
		cout<<"3.- Listar"<<endl;
		cout<<"4.- Simulacion"<<endl;
		cout<<"5.- Salir"<<endl;

		cin>> opcion;
		switch (opcion) {

			case 1:{
                string nombre;
                string genero;
                string colorCabello;
                string colorOjos;
                string colorPiel;
                bool fertil;
                char op;

                cout<<"Ingrese el Nombre de la persona: "<<endl;
                cin>>nombre;
                cout<<"Ingrese el Genero de la persona(masculino o femenino): "<<endl;
                cin>>genero;
                cout<<"Ingrese el Color de Cabello: "<<endl;
                cin>>colorCabello;
                cout<<"Ingrese el Color de Ojos: "<<endl;
                cin>>colorOjos;
                cout<<"Ingrese el Color de Piel: "<<endl;
                cin>>colorPiel;
                cout<<"Es Fertil? s/n"<<endl;
                cin>>op;
                if(op == 's') {
                    fertil == true;
                }else{
                    fertil == false;
                }

                Persona* per = new Persona(nombre,genero,colorCabello,colorOjos,colorPiel,fertil);
                person.push_back(per);
                
				break;
            }
                
			case 2:
                int opc;
                for(int i = 0; i < person.size(); i++){
                    cout<<person[i] -> getNombre() <<endl;
                }
                cout<<"Cual quiere Eliminar: "<<endl;
                cin>>opc;

                person.erase(person.begin()+opc);

				break;
            case 3:
                for(int i = 0; i < person.size(); i++){
                    cout<<person[i] -> getNombre() <<endl;
                }
                break;
            case 4:
                int p1;
                int p2;

                for(int i = 0; i < person.size(); i++){
                    cout<<person[i] -> getNombre() <<endl;
                }

                cout<<"Seleccione la primera persona: "<<endl;
                cin>>p1;
                cout<<"Seleccone la segunda persona: "<<endl;
                cin>>p2;                

                if(person[p1] -> getGenero() == person[p2] -> getGenero()) {
                    cout<<"No se puede el coito entre los mismos sexos"<<endl;
                }else{

                }
                break;
			case 5:
				cout<<"Tenga Buen Dia"<<endl;
				break;	
		}
	}while(opcion != 5);

    return 0;
}

