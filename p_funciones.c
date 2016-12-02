#include <stdio.h>

/* Declaración de funciones */

//Declara una funcion que aplicara una operacion *fun a un entero, a algun entero dado.
int misterio1(int (*fun) (int), int);
//Lo mismo que misterio1.
void misterio2(void (*fun) (int), int);
//funcion que recibe un entero
int cuadrado_num(int);
//funcion que recibe un entero
void imprime_num(int);

//Metodo main, todo programa en c debe tenerlo para ejecutarse
int main()
{

  //Apuntador de un entero, con un cast
  int (*fun1) (int);
  //Apuntador de tipo void
  void (*fun2) (int);

  //Apuntador a la funcion cuadrado_num
  fun1 = &cuadrado_num;
  //Apuntador a la funcion imprime_num
  fun2 = &imprime_num;

  //Variable de tipo int que guarda el valor que regresa misterio1, que es aplicar el cuadrado al numero 3
  int var = misterio1(fun1, 3);
  //Aplica la funcion misterior dos, que a su vez aplica la fun2 al valor que regresa misterio1
  misterio2(fun2, var);
}

//Creacion de la funcion misterio1
int misterio1(int (*fun) (int), int num)
{
    //Regresa el valor de aplicar alguna funcion fun a num
    return fun(num);
}

//Creacion de la funcion misterio2
void misterio2(void (*fun) (int), int num)
{
    //Regresa el valor de aplicar alguna funcion fun a num
    fun(num);
}

//Creacion de la funcion cuadrado_num
int cuadrado_num(int num)
{
    //Regresa el cuadrado de num
    return num * num;
}

//Creacion de la funcion imprime_num
void imprime_num(int num)
{
    //Imprime num
    printf("Tada: %d\n", num);
}
