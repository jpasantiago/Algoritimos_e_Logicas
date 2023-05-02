#include <stdio.h>
#include <conio.h>

/*6 - Escreva um algoritmo que leia 3 números e ao final subtraia o primeiro do segundo e divida o resultado pelo terceiro.*/

void main (){
	int n1, n2, n3; 
	float divi;
	
	printf("Informe um numero: ") ;
	scanf("%d", &n1);
	printf("Informe um numero: ") ;
	scanf("%d", &n2);
	printf("Informe um numero: ") ;
	scanf("%d", &n3);
	divi = (float) (n1 - n2) / (float)n3;
	printf("A resultado e: %0.2f \n", divi );
}
