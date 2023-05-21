#include <iostream>
#include <string>

using namespace std;

class ModeloNintendo {
   public:
      string nombre;
      string color;
      int edad;
      bool esHumano;
      char letraInicial;      

      ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano = false);
      ~ModeloNintendo();
      
      void saludar(string nombre);
      void saltar(char tecla);
      void agacharse(char tecla = 'C');
      int avanzar(char tecla);
      void danio(string grito);
   
       // Setters añadidos
    void setNombreClave(string nombreClave) {
        this->nombreClave = nombreClave;
    }

    void setSalud(int salud) {
        this->salud = salud;
    }

    // Getters añadidos
    string getNombreClave() {
        return nombreClave;
    }

    int getSalud() {
        return salud;
    }
   
   //Método añadido
   
   void BrincoEspecial() {
        cout << "Brincando arriba de 2 metros" << endl;
   }
      
   protected:
      string nombreClave;
      int salud;
      char combinacionHabilidades[10];
      void habilidadesEspeciales(string combinacionTeclas);
   
   private:
      string nombreSecreto;
      char combinacionTrucos[10];
      char combinacionSecretos[10];
      void trucos(string combinacionTeclas);
      void revelarSecretos(string combinacionTeclas);
};
