#include <stdio.h>
#include <conio.h>

/*13 - Fa�a um algoritmo que ao receber um n�mero qualquer, seja capaz de verificar se o mesmo � ou n�o negativo.*/

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
