//
//  cliente.h
//  Proyecto
//
//  Created by KARLA PADILLA on 27/05/22.
//

#ifndef cliente_h
#define cliente_h
#include <string>
#include <iostream>
#include <sstream>


using namespace std;


class Cliente{
protected:
    int numero_cliente;
    string nombre;
    string tipocomida;
    
    public:
        Cliente (): numero_cliente(0), nombre(""),tipocomida(""){};
    Cliente (int numero_c, string nom, string tipc): numero_cliente(numero_c), nombre(nom), tipocomida(tipc) {};

    int get_numero_cliente(){
        return numero_cliente;
    }
    string get_nombre(){
        return nombre;
    }
    string get_tipocomida(){
        return tipocomida;
    }
    virtual double total_pedido ()=0 ;
    
    virtual string to_string() = 0;
    
};


class Desayuno:public Cliente{
private:
    double precio_buffet;
public:
    Desayuno(): Cliente(0,"","desayuno") {};
    Desayuno (int numero_cliente, string nombre,double precio_buffet): Cliente (numero_cliente, nombre,"desayuno"),precio_buffet(precio_buffet){};
    int get_numero_cliente (){
        return numero_cliente;
    }
    
    string get_nombre (){
        return nombre;
    }

    double total_pedido (){
        return precio_buffet;
    }
    string to_string ();
    
};

string Desayuno:: to_string(){
    stringstream aux;
    aux <<"El cliente con nombre: " << nombre << " " << numero_cliente << " tipo de comida: " << tipocomida << " su tipo de costo de buffet de desayuno es:  " << precio_buffet << "\n\n";
    return aux.str();
}

class Comida:public Cliente{
private:
    double comidas_cant ;
public:
    Comida(): Cliente(0,"","Comida") {};
    Comida(int numero_cliente,string nombre,double comidas_cant): Cliente (numero_cliente,nombre,"Comida"),comidas_cant(comidas_cant){};
    
    string get_nombre (){
        return nombre;
    }
    
    double total_pedido (){
        return comidas_cant * 100;
    }
    string to_string ();
    
};

string Comida:: to_string () {
    stringstream aux;
    aux <<"El cliente con nombre y número de cliente es:  " << nombre << " " << numero_cliente <<" tipo de comida:  " << tipocomida << " su total de pedido de comidas es:  " << total_pedido() << "\n\n";
    return aux.str();
}

class Cena:public Cliente{
private:
    double promocion_buffet ;
public:
    Cena(): Cliente(0,"","Cena") {};
    Cena(int numero_cliente,string nombre,double promobuffetc): Cliente (numero_cliente,nombre, "Cena"),promocion_buffet(promobuffetc){};
    
    string get_nombre (){
        return nombre;
    }
    double total_pedido (){
        return promocion_buffet*.90;
    }
    string to_string ();
    
};

string Cena:: to_string () {
    stringstream aux;
    aux <<"El cliente con nombre y número de cliente es: " << nombre << " " <<numero_cliente << " tipo de comida: " << tipocomida << " su total de pedido de la cena es con la promocion de buffet es: " << total_pedido() << "\n\n";
    return aux.str();
}

#endif /* cliente_h */
