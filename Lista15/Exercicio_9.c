#include <stdio.h>
#include <conio.h>

/*9 - Faça um algoritmo que leia a idade de uma pessoa e ao final exiba quando meses, 
	dias, horas, minutos e segundo que essa pessoa já viveu.*/

void main (){
	int idade, mes; 
	float dia, hora, minu, segun;
	
	printf("Informe a sua idade: ") ;
	scanf("%d", &idade);
	mes = idade * 12;
	dia = mes * 30;
	hora = dia * 24 ;
	minu = hora * 60 ;
	segun = minu * 60 ;
	
	printf("A quantidade de meses que voce ja viveu e: %d \n", mes );
	printf("A quantidade de dias que voce ja viveu e: %f \n", dia );
	printf("A quantidade de hora que voce ja viveu e: %0.2f \n", hora );
	printf("A quantidade de minutos que voce ja viveu e: %0.2f \n", minu );
	printf("A quantidade de segundo que voce ja viveu e: %0.2f \n", segun );
}
