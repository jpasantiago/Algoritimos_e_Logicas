#include <stdio.h>
#include <conio.h>

/*3 - Escreva um algoritmo que leia seu nome e em uma segunda variável leia seu 
		sobrenome e ao final exiba seu nome concatenado com seu sobrenome.*/

void main (){
	char nome[100], sobrenome[100] ;
	
	printf("Informe seu Nome: ") ;
	scanf("%s", nome);
	printf("Informe seu Sobrenome: ") ;
	scanf("%s", sobrenome);
	printf("O nome eo sobrenome e: %s, %s", nome, sobrenome);
	
}
