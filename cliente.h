/*
 Karla Alejandra Padilla González
 A01705331
 En este archivo se define nuestra clase cliente que tiene clases heredadas que son desayuno, comida y cena
 */
// lo necesario para crear un h
#ifndef cliente_h
#define cliente_h
#include <string>
#include <iostream>
#include <sstream>


using namespace std;

// se declara nuestra clase cliente
class Cliente{
    // se declara nuestras variables de instancia que son protegidas
protected:
    int numero_cliente;
    string nombre;
    string tipocomida;
    
    // se declaran nuestros métodos que tendra el objeto
    public:
        Cliente (): numero_cliente(0), nombre(""),tipocomida(""){}; // constructos por default
    Cliente (int numero_c, string nom, string tipc): numero_cliente(numero_c), nombre(nom), tipocomida(tipc) {};
// los getters
    int get_numero_cliente(){
        return numero_cliente;
    }
    string get_nombre(){
        return nombre;
    }
    string get_tipocomida(){
        return tipocomida;
    }
    virtual double total_pedido ()=0 ; // se crea el método abstracto
    
    virtual string to_string() = 0;
    
};

// se declara nuestra clase desayuno que es heredada de cliente
class Desayuno:public Cliente{
    // variables de instancia de nuestro objeto
private:
    double precio_buffet;
    
    // se crean nuestros métodos públicos
public:
    Desayuno(): Cliente(0,"","desayuno") {}; // constructor por default
    Desayuno (int numero_cliente, string nombre,double precio_buffet): Cliente (numero_cliente, nombre,"desayuno"),precio_buffet(precio_buffet){};
   
 // getters
    int get_numero_cliente (){
        return numero_cliente;
    }
    
    string get_nombre (){
        return nombre;
    }

    double total_pedido (){
        return precio_buffet;
    }
    string to_string (); // nuestro to_string ()
    
};
/*
 tenemos nuestro to_string () para nuestra clase de desayuno convierte nuestros atributos a to_string para que puedan ser impresos
 */
string Desayuno:: to_string(){
    stringstream aux;
    aux <<"El cliente con nombre: " << nombre << " " << numero_cliente << " tipo de comida: " << tipocomida << " su tipo de costo de buffet de desayuno es:  " << precio_buffet << "\n\n";
    return aux.str();
}

/*
 se crea nuestra clase comida que es heredad por cliente
 */
class Comida:public Cliente{
    
// se declaran nuestras variables de instancia
private:
    double comidas_cant ;
    
// se crean nuestros métodos publicos
public:
    Comida(): Cliente(0,"","Comida") {}; // constructor por default
    Comida(int numero_cliente,string nombre,double comidas_cant): Cliente (numero_cliente,nombre,"Comida"),comidas_cant(comidas_cant){};
 // get de nombre
    string get_nombre (){
        return nombre;
    }
 // podemos observar que aqui nuestro total de pedido devuelve el valor, dependiendo de la cantidad que ingrese el usuario multiplicado por 100
    double total_pedido (){
        return comidas_cant * 100;
    }
    string to_string (); // se crea nuestro string to_string ()
    
};
/*
 tenemos nuestro to_string () para nuestra clase de comida convierte nuestros atributos a to_string para que puedan ser impresos
 */

string Comida:: to_string () {
    stringstream aux;
    aux <<"El cliente con nombre y número de cliente es:  " << nombre << " " << numero_cliente <<" tipo de comida:  " << tipocomida << " su total de pedido de comidas es:  " << total_pedido() << "\n\n";
    return aux.str();
}

// se crea nuestra clase cena que es heredada de la clase cliente
class Cena:public Cliente{
    // se crean nuestras varibales de instancia
private:
    double promocion_buffet ;
    
    // se crean nuestros métodos públicos
public:
    Cena(): Cliente(0,"","Cena") {}; // constructor por default
    Cena(int numero_cliente,string nombre,double promobuffetc): Cliente (numero_cliente,nombre, "Cena"),promocion_buffet(promobuffetc){};
    
    // get nombre
    string get_nombre (){
        return nombre;
    }
    // en nuestro total de pedido de la clase cena, regresa la promoción del buffet multiplicado por .90, esto quiere decir que se tiene un 10% de descuento sobre el precio que se ingresa
    double total_pedido (){
        return promocion_buffet*.90;
    }
    string to_string (); // se crea nuestro string de to_string()
    
};

/*
 tenemos nuestro to_string () para nuestra clase de cena convierte nuestros atributos a to_string para que puedan ser impresos
 */

string Cena:: to_string () {
    stringstream aux;
    aux <<"El cliente con nombre y número de cliente es: " << nombre << " " <<numero_cliente << " tipo de comida: " << tipocomida << " su total de pedido de la cena es con la promocion de buffet es: " << total_pedido() << "\n\n";
    return aux.str();
}

#endif /* cliente_h */
