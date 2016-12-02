#include <stdio.h>

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

//funcion bubbleSort
void bubble_sort(int *array, int longitud_array)
{
	//contador del for
	int i =1;
	//tamaño para saber hasta donde debemos ordenar el arreglo
	int tam = longitud_array;

	//Sabemos que en bubleSort en la iteracion k , acomoda el k-esimo elemento mas grande en su posicion,asi en la iteracion k+1
	//ya no tendremos que comparar ese elemento  asi que checamos los elementos que esten a la izquierda del elemento colocado
	//en la iteracion k, por lo que reducimos el tamaño del arreglo
	while(tam >0)
	{
		//For que checara los elemento hasta la longitud-1 del array para ir comparando
		for (i = 0; i < (tam-1); i++)
		{
			//Checa si los elemento estan en orden incorrecto
			if (*(array+ i) > *(array+i+1))
			{
				//Si lo estan hace swap
				int aux = *(array + i);
				*(array + i) = *(array + i + 1);
				*(array + i + 1) = aux;

			}

		}
		//Decrementa el tamaño
		tam --;
	}	
	
}
//Funcion main donde se ejecutara el programa
int main()
{
	//Arreglo de muestra
	int nums[7] = {5,4,3,2,1,7,0};
	//contador del primer for
	int j = 0;
	//for para imprimir los valores del arreglo
	for ( j = 0; j < 7; ++j){
		printf("%i ",nums[j] );
	}
	//Para dar un especia y diferenciar la proxima impresion del arreglo
	printf("\n");
	
	//aplica bubbleSort al arreglo
	bubble_sort(nums,7);
	//Contador del segundo for
	int i =0;
	//for para imprimir los valores del arreglo despues de bubbleSort
	for ( i = 0; i < 7; ++i){
		printf("%i ",nums[i] );
	}
	//Por convencion, regresamos cero
	return 0;
}
