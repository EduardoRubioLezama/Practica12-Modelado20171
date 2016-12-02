//Como siempre incluimos stdio
#include <stdio.h>
//funcion que hace swap a dos numeros
void swap(int *numero1,int *numero2)
{
	//variable auxiliar para guardar el valor de un numero, ya que si lo cambiamos directo, nos dara el mismo valor 
	//para ambos numeros
	int aux = *numero1;
	//el primer valor toma el valor de segundo
	*numero1 = *numero2;
	//el segundo valor toma, el valor original del primer valor, porque en estos momentos ya tiene otro valor
	*numero2 = aux;
}
//Funcion principal
int main()
{
	//Dos numeros para probar la funcion
	int a = 3;
	int b = 1;
	//Imprime los valores originales
	printf("Valor original de a:%i \nValor original de b:%i \n", a,b);
	//Aplica la funcion swap
	swap(&a,&b);

	//Imprime los valores cambiados de las variables
	printf("\nNuevo valor de a:%i\nNuevo valor de b:%i\n",a,b);
	//Por convencion regresamos 0
	return 0;
}