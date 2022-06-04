//
//  cliente.h
//  Proyecto
//
//  Created by KARLA PADILLA on 27/05/22.
//

#ifndef cliente_h
#define cliente_h

#include <iostream>
#include <sstream>
#include "pedido.h"


using namespace std;


class Cliente{
private:
    string nombre;
    int telefono;
    string correo;
    Pedido objetopedido;
    
    public:
        Cliente (): nombre(""), telefono(0),correo(""),objetopedido(){};
    Cliente (string, int, string);
       // nombre (nom),telefono(telef),correo(corr) {};
    
    string get_nombre(){
        return nombre;
    }
    int get_telefono(){
        return telefono;
    }
    
    string get_correo(){
        return correo;
    }
    virtual double total_pedido () ;
    
};

Cliente::Cliente (string nom, int telef, string corr){
    nombre = nom;
    telefono = telef;
    correo = corr;
    objetopedido = Pedido ();
}

#endif /* cliente_h */
