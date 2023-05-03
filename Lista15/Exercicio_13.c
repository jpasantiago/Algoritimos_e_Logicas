#include <stdio.h>
#include <conio.h>

/*13 - Faça um algoritmo que ao receber um número qualquer, seja capaz de verificar se o mesmo é ou não negativo.*/

void main (){
	int n1; 
	
	printf("Informe um numero: ") ;
	scanf("%d", &n1);
	
	if (n1 > 0){
		printf("O numero e positivo" );
	}
	else{
		if (n1 == 0){
			printf("O numero e neutro" );
		}
		else{
			printf("O numero e negativo");
		}
	}
	
}
