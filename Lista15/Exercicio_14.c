#include <stdio.h>
#include <conio.h>

/*14 - Elabore um algoritmo que informe o maior numero entre três números conhecido pelo usuário. (Considere número iguais).*/

void main (){
	int n1, n2, n3; 
	
	printf("Informe o numero: ") ;
	scanf("%d", &n1);
	printf("Informe o numero: ") ;
	scanf("%d", &n2);
	printf("Informe o numero: ") ;
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3){
		printf("Entao o numero maior e: %d \n", n1 );
	}
	else{
		if ( n2 > n1 && n2 > n3){
			printf("Entao o numero maior e: %d \n", n2 );
		}
		else{
			if (n3 > n1 && n3 > n2){
				printf("Entao o numero maior e: %d \n", n3 );
			}
			else{
				if (n1 == n2 && n1 == n3){
					printf("Os numeros sao todos iguais !!!" );
				}
			}
			
		}
	}
}

