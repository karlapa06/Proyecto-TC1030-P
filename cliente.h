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

#include "cliente.h"

#include <sstream>
using namespace std;

class cliente{
    protected:
    string nombre;
    int telefono;
    string correo;
    
    
    public:
        cliente (): nombre(""), telefono(0),correo(""){};
    cliente (string nom, int telef, string corr);
    //nombre (nom),telefono(telef),correo(corr) {};
    
    string get_nombre(){
        return nombre;
    }
    int get_telefono(){
        return telefono;
    }
    
    string get_correo(){
        return correo;
    }
};

#endif /* cliente_h */
