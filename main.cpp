/*
 Karla Alejandra Padilla González
 A01705331
 Proyecto de la clase TC1030
*/

#include <iostream>   // para imprimir.

#include "cliente.h" // bibliotecas con objetos de mi proyecto.

#include "restaurante.h"

using namespace std;

int main(){

    Restaurante restaurante;
    restaurante.crea_clienteejemplos();
    restaurante.muestra_clientes();

    cout << "A continuación con agrega \n\n";
    restaurante.agrega_desayuno("Maria", 300);
    restaurante.muestra_clientes("desayuno");
    restaurante.agrega_comida("Jose",4);
    restaurante.muestra_clientes("comida");
    restaurante.agrega_cena("Paulina", 460);
    restaurante.muestra_clientes("cena");
    cout << "test \n\n";

}
