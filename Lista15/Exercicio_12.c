#include <stdio.h>
#include <conio.h>

/*12 - S�o informados dois valores num�ricos correspondentes as notas de um determinado aluno. 
	Deseja-se um algoritmo que permita responder "aprovado" se o aluno obtiver m�dia aritm�tica 
	simples igual ou superior a 7,0 caso contr�rio "Reprovado". Mostre tamb�m a m�dia de aprova��o do aluno*/

void main (){
	int n1, n2, soma; 
	float media;
	
	printf("Informe a primeira nota: ") ;
	scanf("%d", &n1);
	printf("Informe a segunda nota: ") ;
	scanf("%d", &n2);
	soma = n1 + n2;
	media = soma / 2;
	if (media >= 7){
		printf("Voce esta aprovado, sua media e: %0.1f \n", media );
	}
	else{
		printf("Voce foi reprovado sua media e: %0.1f \n", media );
	}
	
}
