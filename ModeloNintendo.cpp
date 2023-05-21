#include <iostream>
#include <string>
#include "ModeloNintendo.h"
using namespace std;
void menu() {
    cout << "----- Menú -----" << endl;
    cout << "1. Crear nuevo personaje" << endl;
    cout << "2. Saludar" << endl;
    cout << "3. Avanzar" << endl;
    cout << "4. Saltar" << endl;
    cout << "5. Agacharse" << endl;
    cout << "6. Salir" << endl;
    cout << "----------------" << endl;
    cout << "Ingrese su opción: ";
}

ModeloNintendo::ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano) {
   this->nombre = nombre;
   this->color = color;
   this->edad = edad;
   this->salud = salud;
   this->esHumano = esHumano;
}

ModeloNintendo::ModeloNintendo() {
   cout << "Murió" << "\n";
}


//metodos constructores
ModeloNintendo(string nombre, string color, int edad, int salud){
	this->nombre = nombre;
    this->color = color;
    this->edad = edad;
    this->salud = salud;
}


ModeloNintendo(string nombre, string color, int edad){
	this->nombre = nombre;
    this->color = color;
    this->edad = edad;
}

ModeloNintendo(string nombre){
	this->nombre = nombre;
	
}

ModeloNintendo(string nombre, int salud, bool esHumano = false){
	this->nombre = nombre;
    this->salud = salud;
    this->esHumano = esHumano;
}

ModeloNintendo(bool esHumano = false){
	this->esHumano = esHumano;
}

ModeloNintendo(int edad, int salud){
	this->edad = edad;
    this->salud = salud;
}


void ModeloNintendo::saludar(string nombre) {
	cout << "Hola " << nombre << "\n";
}

void ModeloNintendo::saltar(char tecla) {
	cout << "yuha";
}

void ModeloNintendo::agacharse(char tecla) {
	cout << "oig";
}

int ModeloNintendo::avanzar(char tecla) {
	cout << "tac tac tac";
   return 0;
}

void ModeloNintendo::danio(string grito) {
	cout << "Mamamia";
}

void ModeloNintendo::habilidadesEspeciales(string combinacionTeclas) {
   cout << "Hola" << combinacionTeclas;
}

void ModeloNintendo::trucos(string combinacionTeclas) {
   cout << "Hola";
}

void ModeloNintendo::revelarSecretos(string combinacionTeclas) {
   cout << "Hola";
}

int main() {
    ModeloNintendo* personaje = nullptr;
    int opc;

    do {
        menu();
        cin >> opc;

        switch (opc) {
            case 1: {
                string nombre, color;
                int edad, salud;
                bool esHumano;

                cout << "Ingrese el nombre del personaje: ";
                cin >> nombre;
                cout << "Ingrese el color del personaje: ";
                cin >> color;
                cout << "Ingrese la edad del personaje: ";
                cin >> edad;
                cout << "Ingrese la salud del personaje: ";
                cin >> salud;
                cout << "¿Es humano? (1: Sí, 0: No): ";
                cin >> esHumano;

                personaje = new ModeloNintendo(nombre, color, edad, salud, esHumano);

                cout << "Personaje creado correctamente." << endl;
                break;
            }
            case 2: {
                    string nombre;
                    cout << "Ingrese el nombre de la persona a saludar: ";
                    cin >> nombre;
                    personaje->saludar(nombre);
                    break;
            }
            case 3: {
                    char tecla;
                    cout << "Ingrese la tecla para avanzar: ";
                    cin >> tecla;
                    int posicion = personaje->avanzar(tecla);
                    cout << "El personaje avanzó a la posición " << posicion << endl;
                    break;
            }
            case 4: {
                    char tecla;
                    cout << "Ingrese la tecla para saltar: ";
                    cin >> tecla;
                    personaje->saltar(tecla);
                break;
            }
            case 5: {
                    char tecla;
                    cout << "Ingrese la tecla para agacharse: ";
                    cin >> tecla;
                    personaje->agacharse(tecla);
                break;
            }
            case 6: {
                cout << "Saliendo..." << endl;
                break;
            }
            default: {
                cout << "Ingrese opción válida" << endl;
                break;
            }
        }

        cout << endl;
    } while (opc != 6);

    delete personaje;
  return 0;
}
