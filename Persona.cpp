#include "Persona.h"

using namespace std;

Persona::Persona() {

}

Persona::Persona(string pnombre, string pgenero, string pcolorCabello, string pcolorOjos, 
string pcolorPiel, bool pfertil) {
    nombre = pnombre;
    genero = pgenero;
    colorCabello = pcolorCabello;
    colorOjos = pcolorOjos;
    colorPiel = pcolorPiel;
    fertil = pfertil;
}

Persona::~Persona() {

}

//getters
string Persona::getNombre() {
    return nombre;
}

string Persona::getGenero() {
    return genero;
}

string Persona::getColorCabello() {
    return colorCabello;
}

string Persona::getColorOjos() {
    return colorOjos;
}

string Persona::getColorPiel() {
    return colorPiel;
}

bool Persona::getFertil() {
    return fertil;
}

//setters
void Persona::setNombre(string nom) {
    nombre = nom;
}

void Persona::setGenero(string gene) {
    genero = gene;
}

void Persona::setColorCabello(string cc) {
    colorCabello = cc;
}

void Persona::setColorOjos(string co) {
    colorOjos = co;
}

void Persona::setColorPiel(string cp) {
    colorPiel = cp;
}

void Persona::setFertil(bool fert) {
    fertil = fert;
}

ostream& operator<<(ostream& out, Persona& per) {
    
}