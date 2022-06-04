//
//  restaurante.h
//  Proyecto
//
//  Created by KARLA PADILLA on 27/05/22.
//

#ifndef restaurante_h
#define restaurante_h

#include <iostream>
#include <sstream>

#include "cliente.h"

using namespace std;

class Restaurante {
public:
    void crea_cliente ();
    void muestra_comida ();
    void muestra_pedido();
    double calc_total_pedido();
    
    
};



#endif /* restaurante_h */
