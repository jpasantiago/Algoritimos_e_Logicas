#include <stdio.h>
#include <conio.h>

/*10 - Elabore um algoritmo que informe o maior n�mero entre dois n�meros conhecido pelo usu�rio.*/

void main (){
	int n1, n2, maior; 
	
	printf("Informe o numero: ") ;
	scanf("%d", &n1);
	printf("Informe o numero: ") ;
	scanf("%d", &n2);
	if ( n1 > n2){
		printf("O numero maior e: %d \n", n1 );	
	}
	else{
		if ( n1 == n2){
			printf( "Os numeros sao iguais!!!" );	
		}
		else{
			printf("O numero maior e: %d \n", n2 );	
		}
				
	}
}
