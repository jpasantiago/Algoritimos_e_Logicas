#include <stdio.h>
#include <conio.h>

/*4 - Escreva um algoritmo que leia 2 números, após a leitura somar e exibir o resultado.*/

void main (){
	int n1, n2, soma;
	
	printf("Informe um numero: ") ;
	scanf("%d", &n1);
	printf("Informe um numero: ") ;
	scanf("%d", &n2);
	soma = n1 + n2 ;
	printf("A resultado e: %d \n", soma );
	system ("pause" );
}
