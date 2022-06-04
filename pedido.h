//
//  pedido.h
//  Proyecto
//
//  Created by KARLA PADILLA on 27/05/22.
//

#ifndef pedido_h
#define pedido_h

#include <iostream>
#include <sstream>
#include "comida.h"
#include <sstream>

const int MAX = 4;

using namespace std;

class Pedido {
private:
    Comida* comidas[MAX];
    double total_pedido;
public:
    Pedido ();
    Pedido (Comida[]);
};

Pedido::Pedido () {
    total_pedido=0;
    *comidas = new Comida[4];
}
Pedido::Pedido (Comida comidas_usuario[]) {
    
}


#endif /* pedido_h */
