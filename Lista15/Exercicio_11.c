#include <stdio.h>
#include <conio.h>

/*11 - Construa um algoritmo para calcular a média de dois valores inteiros positivos, previamente conhecidos.*/

void main (){
	int n1, n2, soma; 
	float media;
	
	printf("Informe a primeira nota: ") ;
	scanf("%d", &n1);
	printf("Informe a segunda nota: ") ;
	scanf("%d", &n2);
	soma = n1 + n2;
	media = soma / 2;
	printf("A sua media e: %0.1f \n", media );
}
