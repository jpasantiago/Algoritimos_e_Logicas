#include <stdio.h>
#include <conio.h>

/*7 - Escreva um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, ao final exiba a idade que essa pessoa tem.*/

void main (){
	int anon, anoatual, sub; 
	
	printf("Informe o ano de nascimento: ") ;
	scanf("%d", &anon);
	printf("Informe o ano atual: ") ;
	scanf("%d", &anoatual);
	sub = anoatual - anon;
	printf("A sua idade e: %d \n", sub );
}
