#include <stdio.h>
#include <conio.h>

/*8 - Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.*/

void main (){
	int n1, n2, n3, soma; 
	float media;
	
	printf("Informe a primeira nota: ") ;
	scanf("%d", &n1);
	printf("Informe a segunda nota: ") ;
	scanf("%d", &n2);
	printf("Informe a terceira nota: ") ;
	scanf("%d", &n3);
	soma = n1 + n2 + n3 ;
	media = soma / 3;
	printf("A sua media e: %0.1f \n", media );
}
