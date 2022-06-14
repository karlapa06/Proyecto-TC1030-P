//
//  restaurante.h
//  Proyecto
//
//  Created by KARLA PADILLA on 27/05/22.
//

#ifndef restaurante_h
#define restaurante_h
#include <string>

#include <iostream>
#include <sstream>

#include "cliente.h"

using namespace std;

const int Max = 1000;

class Restaurante {
private:
    Cliente * clin[Max];
    int numero_cliente;
    
public:
    Restaurante():numero_cliente(0){};
    void crea_clienteejemplos ();
    void muestra_clientes ();
    void muestra_clientes(string tipocomida);
    void agrega_desayuno (string nombre, double buffet);
    void agrega_comida (string nombre, double cantc);
    void agrega_cena (string nombre, double promobuffetc);
    
    
};

void Restaurante:: crea_clienteejemplos(){
    clin[numero_cliente]= new Desayuno (numero_cliente,"Karla",400);
    numero_cliente++;
    clin[numero_cliente]= new Desayuno (numero_cliente,"Alejandro",500);
    numero_cliente++;
    clin[numero_cliente]= new Desayuno (numero_cliente,"Mauricio",600);
    numero_cliente++;
    clin[numero_cliente]= new Comida (numero_cliente,"Manuel",2);
    numero_cliente++;
    clin[numero_cliente]= new Comida (numero_cliente,"Eli",5);
    numero_cliente++;
    clin[numero_cliente]= new Cena (numero_cliente,"Luis",380);
    numero_cliente++;
    clin[numero_cliente]= new Cena (numero_cliente,"Luis",690);
    numero_cliente++;
}

void Restaurante:: muestra_clientes (){
    for (int i = 0; i < numero_cliente;i++)
        cout << clin [i] -> to_string ();
}

void Restaurante::muestra_clientes(string tipocomida){
    for (int i = 0; i < numero_cliente;i++){
        if (clin [i] -> get_tipocomida()==tipocomida)
        cout << clin [i] -> to_string ();
        
    }
}

void Restaurante::agrega_desayuno (string nombre, double precio_buffet){
    clin[numero_cliente]= new Desayuno (numero_cliente,nombre,precio_buffet);
    numero_cliente++;
}

void Restaurante::agrega_comida (string nombre, double comidas_cant){
    clin[numero_cliente] = new Comida (numero_cliente,nombre, comidas_cant);
    numero_cliente++;
}
void Restaurante::agrega_cena (string nombre, double promobuffetc){
    clin[numero_cliente] = new Cena (numero_cliente,nombre, promobuffetc);
    numero_cliente++;

}

#endif /* restaurante_h */
