//Como siempre incluimos stdio
#include <stdio.h>
//Funcion principal, que ejecutara el codigo
int main()
{
	//Nos da el tamaño en bytes del tipo short
	printf("El tipo short tiene tamaño  %ld\n", sizeof(short));
	//Nos da el tamaño en bytes del tipo int
	printf("El tipo int tiene tamaño  %ld\n", sizeof(int));
	//Nos da el tamaño en bytes del tipo unsigned int 
	printf("El tipo unsigned int tiene tamaño  %ld\n", sizeof(unsigned int));
	//Nos da el tamaño en bytes del tipo apuntador a int
	printf("El tipo apuntador a int tiene tamaño  %ld\n", sizeof(int *));
	//Nos da el tamaño en bytes del tipo char
	printf("El tipo char tiene tamaño  %ld\n", sizeof(char));
	//Nos da el tamaño en bytes del tipo float
	printf("El tipo float tiene tamaño  %ld\n", sizeof(float));
	//Nos da el tamaño en bytes del tipo double
	printf("El tipo double tiene tamaño  %ld\n", sizeof(double));

	//Por convencion regresamos 0
	return 0;
}