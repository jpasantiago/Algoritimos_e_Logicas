#include <stdio.h>
#include <conio.h>

/*5 - Escreva um algoritmo que leia 4 números, após a leitura multiplique todos e exibir o resultado.*/

void main (){
	int n1, n2, mult, n3, n4;
	
	printf("Informe um numero: ") ;
	scanf("%d", &n1);
	printf("Informe um numero: ") ;
	scanf("%d", &n2);
	printf("Informe um numero: ") ;
	scanf("%d", &n3);
	printf("Informe um numero: ") ;
	scanf("%d", &n4);
	mult = n1 * n2 * n3 * n4;
	printf("A resultado e: %d \n", mult );
}
