/*
 Proyecto Restaurante
 Karla Alejandra Padilla González
 A01705331
 Proyecto de la clase TC1030
 17 de junio de 2022
 
 Es un programa que tiene clases como restaurante, cliente, desayuno, comida y cena, lo que se desea con este programa es que un cliente de un restaurante pueda eligir entre los tres tipos de comidas y escoger entre sus diferencias de cada una
*/

#include <iostream>   // para imprimir.

// bibliotecas con objetos de mi proyecto.
#include "cliente.h"
#include "restaurante.h"


using namespace std;
// A continuación tenemos nuestro main
int main(){
    // se crean dos variables para crear un menu con ciclo do while, switch
    int opcion;
    bool repetir = true;
    // en nuestro do while, se presentará el menu de opciones
    do {
        // puede elegir entre crear cliente, ejemplos y salir
        cout << "Restaurante" << endl;
        cout << "Menú de opciones " << endl;
        cout << "1.Crea cliente" << endl;
        cout << "2.Ejemplos " << endl;
        cout << "3. Salir" << endl;
        cout << "\n Ingresa una opción: ";
        cin >> opcion;
        // para la opcion que escoga con un switch y en cada caso se manda a llamar a la función
        switch (opcion) {
            case 1:
                cout << "Crea cliente" << endl;
                creacliente ();
                break;
           case 2:
                cout << " \n Ejemplos: \n\n" << endl;
                muestracliente();
                break;
           case 3:
                cout << "Nos vemos" << endl;
                repetir = false;
                break;
          
        }
    }while (repetir);
    return 0;

}
