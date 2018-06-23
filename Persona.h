#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Persona {
    private:
            string nombre;
            string genero;
            string colorCabello;
            string colorOjos;
            string colorPiel;
            bool fertil;

    public:
            Persona();
            Persona(string,string,string,string,string,bool);
            ~Persona();

            //getters
            string getNombre();
            string getGenero();
            string getColorCabello();
            string getColorOjos();
            string getColorPiel();
            bool getFertil();

            //setters
            void setNombre(string);
            void setGenero(string);
            void setColorCabello(string);
            void setColorOjos(string);
            void setColorPiel(string);
            void setFertil(bool);
            
            //operadores
            double operator +(Persona&);
            double operator *(Persona&);
};
#endif