# Project-C Proteco Gen44

Se realizaron cambios en los códigos de ModeloNintendo.cpp y ModeloNintendo.h ; los cambios realizados fueron los siguientes:

- Inserción de métodos set y get
   ```js 
       void setNombreClave(string nombreClave) {
        this->nombreClave = nombreClave;
    }

    void setSalud(int salud) {
        this->salud = salud;
    }
   ``` 
    
- Inserción de un método nuevo 

 ```js 
   void BrincoEspecial() {
        cout << "Brincando arriba de 2 metros" << endl;
   }
 ```

- Creación de menu con las siguientes opciones:

 ```js 
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
 ```
