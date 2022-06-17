# Proyecto-TC1030-P
El programa se ha modificado a como era al principio de la elaboración del proyecto
Es el proyecto final de la materia de programación orientada a objetos (TC1030). Trata sobre un restaurante que tiene desayuno, comida y cena, el objetivo principal es que el cliente que va al restaurante se le dará a conocer que en el desayuno está la opción de buffet, en la comida dependiendo de la cantidad de comidas será lo que pagará y en la cena se le hará un descuento de 10%. Se genera una estructura de clases para poder manejar entre el cliente y el tipo de comida.  
Lo que separa a las distintos tipo de comidas son las promociones que hay.

# Funcionalidad
El programa solo permite que el cliente cree su pedido (el tipo de comida) y de está manera el cálculo de su pedido. 
Al momento de que el usuario corra el programa, se le desplegará un menú de 3 opciones entre ellas son: 
1. Crear cliente 
2. Ejemplos
3. Salir

El usuario deberá de escoger una de ellas, si escoge la opción número uno de crear cliente se le despegará otro menú: 
1. Desayuno (promoción buffet)
2. Comida (cantidad de comidas)
3. Cena (descuento de 10%) 
4. Salir de crear cliente

En el caso de que el usuario escoga la opción 1, se le pedirá su nombre y se le desplegarán las distintas promociones que estan en desayuno que son; 200 incluye desayuno y una bebida, 300 incluye desayuno, una bebida y un postre y 500 incluye desayuno, bebidas las que quieras y un postre, se le pedirá que desee que opción desea y al final desplegará su nombre y el total del pedido. 

En caso de que el usuario escoga la opción 2, se le pedirá su nombre y se le desplegará la siguiente indicación: cada comida trae plato fuerte, bebida y postre por $100, el usuario deberá de ingresar la cantidad de comidas y se imprimirá su nombre y el total del pedido. 

En caso de que el usuario escoga la opción 3, se le pedirá su nombre y se le desplegarán las distintas opciones de buffet de cena; 300 incluye cena y una bebida, 450 incluye cena, una bebida y un postre y 600 incluye cena, bebidas las que quieras y un postre, ingresa el monto del buffet de cena que desee y al final se imprime el nombre y el total del pedido. 

Y en caso de que el usuario ingrese la opción 4, se regresa al menú principal. 

En caso de que el usuario no haya escogido la opción 1 del menú principal, y seleccione la opción 2 de ejemplos se imprimirán los ejemplos. Y por último, en caso de que escoga la opción 3 del menú principal, salir, se termina de ejecutar el programa 



# Consideraciones
El programa solo corre en la consola y esta hecho con c++ standard, se debe de tomar en cuenta que se debe compilar con: "main.cpp cliente.h restaurante.h"
