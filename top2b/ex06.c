// Escreva um programa em C que receba a idade do usuário em
// anos e imprima na tela sua idade em minutos (desconsidere a
// existência de anos bissextos).
#include <stdio.h>

int main(){

	float yo;
	printf("Digite sua idade em anos: ");
	scanf("%f", &yo);
	printf("Você já viveu %.0f minutos.\n", yo*365*24*60 );

	return 0;
}