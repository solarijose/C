/*
 ============================================================================
 Name        : LibroC1.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : VARIABLES. ACUMULADORES. CONTADORES.
 ============================================================================

1.Ingresar 5 números y calcular su media
2.Escribir el programa necesario para calcular la suma de dos números. Mostrar el resultado
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//Declaro Variables
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int numero5;
	//int suma;

	printf("Ingrese primer numero\n");
	scanf("%d",&numero1);
	printf("Ingrese segundo numero\n");
	scanf("%d",&numero2);
	printf("Ingrese tercer numero\n");
	scanf("%d",&numero3);
	printf("Ingrese cuarto numero\n");
	scanf("%d",&numero4);
	printf("Ingrese quinto numero\n");
	scanf("%d",&numero5);

	printf("La suma es %d\n", numero1+numero2+numero3+numero4+numero5);
	//suma = numero1+numero2+numero3+numero4+numero5;
	//printf("La suma es %d\n", suma);



	return 0; //indica el fin del progama
}
