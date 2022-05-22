/* Autor: Xavier Romero Hernández, Realizado: 24/02/2022 
	Programa que pida el valor de x, el cual debe estar comprendido en el rango 0<x<10
		El programa debe decir, si x tiene un valor valido, en caso contrario indicarle el error al usuario
	*/
	
#include <stdio.h>

int main(){
	float x;
	
	printf("Introduce un valor de x (0<x<10): ");
	scanf("%f",&x);
	if(x>0 && x<10){
		printf("x se encuentra dentro del rango\n");
	}
	else{
		printf("Valor invalido, x debe estar entre 1 y 9\n");
	}
	
	return 0;
}
