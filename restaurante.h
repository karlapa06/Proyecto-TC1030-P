/*
 restaurante.h
 Proyecto de la materia de TC1030
 Created by KARLA PADILLA on 16/06/22.
 En este archivo se define la clase restaurante, que contiene lo necesario para crear clientes, mostrarlos, agregar clientes y calcular el pedido de cada uno de ellos
*/

#ifndef restaurante_h
#define restaurante_h
#include <string>

#include <iostream>
#include <sstream>
// biblioteca del objeto a utilizar
#include "cliente.h"

using namespace std;

const int Max = 1000;

class Restaurante {
    // se declaran nuestras variables privadas
private:
    Cliente * clin[Max]; // es un apuntador para poder utilizar polimorfismo
    int numero_cliente; // nuestro numero de clientes
    
    // se declaran nuestras variables publicas con sus debidos métodos
public:
    Restaurante():numero_cliente(0){}; // constructor de restaurante
   // nuestras métodos
    void crea_clienteejemplos ();
    void muestra_clientes ();
    void muestra_clientes(string tipocomida);
    void agrega_desayuno (string nombre, double buffet);
    void agrega_comida (string nombre, double cantc);
    void agrega_cena (string nombre, double promobuffetc);
    
    
};

/* en la parte de crea_clientesejemplos que es donde se generan nuestros objetos para la clase Restaurante
 se generan nuestros objetos de acuerdo a nuestro programa que fueron de tres tipos, por desayuno, por comida y por cena.
 */

void Restaurante:: crea_clienteejemplos(){
    // en este caso observamos que utilizamos polimorfismo y con el new se crean nuestros objetos
    clin[numero_cliente]= new Desayuno (numero_cliente,"Karla",200);
    numero_cliente++;
    clin[numero_cliente]= new Desayuno (numero_cliente,"Alejandro",500);
    numero_cliente++;
    clin[numero_cliente]= new Desayuno (numero_cliente,"Mauricio",300);
    numero_cliente++;
    clin[numero_cliente]= new Comida (numero_cliente,"Manuel",2);
    numero_cliente++;
    clin[numero_cliente]= new Comida (numero_cliente,"Eli",5);
    numero_cliente++;
    clin[numero_cliente]= new Cena (numero_cliente,"Luis",500);
    numero_cliente++;
    clin[numero_cliente]= new Cena (numero_cliente,"Luis",600);
    numero_cliente++;
}

/*
 En la siguiente de muestra_clientes, lo que ocurre es que se imprimen nuestros clientes que fueron creados anteriormente se utiliza un ciclo for y además se imprimen con su diferente to_string ()
 */

void Restaurante:: muestra_clientes (){
    for (int i = 0; i < numero_cliente;i++)
        cout << clin [i] -> to_string ();
}
/*
 en este caso se imprime de nuevo el muestra_clientes, solo que la diferencia entre el anterior y este es que se va recorriendo todo el arreglo y se va imprimiendo cada uno respecto a tipo de comida si observamos hay un get_tipocomida, que se divide en desayuno, comida y cena)
 */
void Restaurante::muestra_clientes(string tipocomida){
    // ciclo que recorre el arreglo y se agrega un if
    for (int i = 0; i < numero_cliente;i++){
        if (clin [i] -> get_tipocomida()==tipocomida)
        cout << clin [i] -> to_string ();
        
    }
}

/*
 en agrega_desayuno se crea un objeto de desayuno que se van guardando en el arreglo de empleados, si observamos el numero_cliente va aumentando con un ++, es decir de uno en uno.
 cada objeto de desayuno se va guardando y va teniendo un índice que como se menciono con el numero_cliente++
 */


void Restaurante::agrega_desayuno (string nombre, double precio_buffet){
    clin[numero_cliente]= new Desayuno (numero_cliente,nombre,precio_buffet);
    numero_cliente++;
}

/*
 en agrega_comida se crea un objeto de comida que se van guardando en el arreglo de empleados, si observamos el numero_cliente va aumentando con un ++, es decir de uno en uno.
 cada objeto de comida se va guardando y va teniendo un índice que como se menciono con el numero_cliente++
 */

void Restaurante::agrega_comida (string nombre, double comidas_cant){
    clin[numero_cliente] = new Comida (numero_cliente,nombre, comidas_cant);
    numero_cliente++;
}

/*
 en agrega_cena se crea un objeto de cena que se van guardando en el arreglo de empleados, si observamos el numero_cliente va aumentando con un ++, es decir de uno en uno.
 cada objeto de cena se va guardando y va teniendo un índice que como se menciono con el numero_cliente++
 */

void Restaurante::agrega_cena (string nombre, double promobuffetc){
    clin[numero_cliente] = new Cena (numero_cliente,nombre, promobuffetc);
    numero_cliente++;

}

/*
 lo que se crea a continuación es nuestra función creacliente(), que es llamada en nuestro main en menú para que si el usuario desea crear un cliente lo pueda hacer
 */


void creacliente () {
    // se acrecan nuestros tipos de variables a utilizar
    string nombre;
    double precio_buffet,comidas_cant,promocion_buffet,res,res2;
    int opcion;
    bool repetir = true;
    // se crea un do while y switch para crear un menú que le permite al usuario esocoger que tipo de comida de sea
    do {
        // menú
        cout << "\n Escoge el tipo de comida \n" << endl;
        cout << "1. Desayuno (promocion buffet) " << endl;
        cout << "2. Comida (cantidad de comidas) " << endl;
        cout << "3. Cena (descuento del 10%)" << endl;
        cout << "4. Salir de crear cliente " << endl;
        // se ingresa nuestra opción
        cout << "\n Ingresa una opción: ";
        cin >> opcion;
        // con switch para establecer cada caso
        switch (opcion) {
                /*si escoge uno se despliega el de desayuno
                 le pide su nombre al usuario, y le aparece en pantalla los tipos de promocion de buffet y el escogerá que opcion desea y por último se imprimiera cual es su nombre y su total de pedido
                 */
            case 1:
                cout << "Ingresa tu nombre: " << endl;
                cin >> nombre;
                cout << "\n 200 incluye desayuno y una bebida" << endl;
                cout << "\n 300 incluye desayuno, una bebida y un postre" << endl;
                cout << "\n 500 incluye desayuno, bebidas las que quieras y un postre" << endl;
                cout << "Ingresa la promocion de 200, 300 o 500" << endl;
                cin >> precio_buffet;
                cout << "Tu nombre es:  " << nombre << "\nY tu total de pedido es: " << precio_buffet;
                break;
        /*si escoge uno se despliega el de comida
            le pide su nombre al usuario, y le aparece en pantalla al usuario que cada comida cuenta con plato fuerte, bebida y postre por un costo de 100 pesos, y el tendrá que ingresar la cantidad de comidas que desea y por último se imprimiera cual es su nombre y su total de pedido
         */
            case 2:
                cout << "Ingresa tu nombre: " << endl;
                cin >> nombre;
                cout << "Cada comida trae plato fuerte, bebida y postre por $100" << endl;
                cout << "Ingresa la cantidad de comidas: " << endl;
                cin >> comidas_cant;
                res = comidas_cant * 100;
                cout << "Tu nombre es:  " << nombre << "\nY tu total de pedido es: " << res;
                break;
                
        /*si escoge uno se despliega el de cena
        le pide su nombre al usuario, y le aparece en pantalla los tipos de buffet de cena y el escogerá que opcion desea y por último se imprimiera cual es su nombre y su total de pedido con el 10% de descuento que tendrá
        */
            case 3:
                cout << "Ingresa tu nombre: " << endl;
                cin >> nombre;
                cout << "\n 300 incluye cena y una bebida" << endl;
                cout << "\n 450 incluye cena, una bebida y un postre" << endl;
                cout << "\n 600 incluye cena, bebidas las que quieras y un postre" << endl;
                cout << "Ingresa el precio del buffet: " << endl;
                cin >> promocion_buffet;
                res2 = promocion_buffet*.90;
                cout << "Tu nombre es:  " << nombre << "\nY tu total de pedido es: " << res2;
                
                break;
                
            // por ultimo si es el caso 4, se sale y se regresa al menú principal
            case 4:
                cout << "Nos vemos \n\n " << endl;
                repetir = false;
                break;
        }
    }while(repetir); // se termina nuestro ciclo cuando selecciona la opcion 4
}
// se crea nuestra funcion de muestracliente, que son la opcion 2 de nuestro menu principal y le despliegan los ejemplos que se crean a principio de este archivo
void muestracliente (){
    Restaurante restaurante;
    restaurante.crea_clienteejemplos();
    restaurante.muestra_clientes();
}

#endif /* restaurante_h */
