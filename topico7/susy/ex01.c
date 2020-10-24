#include <stdio.h>
#include <string.h>

int main(){

	char str[81];
	int i;

	fgets(str, 80, stdin);

	str[strlen(str)-1]='\0'; 				 //Para retirar o \n do input

	for (i = strlen(str) - 1; i >= 0; i--){  // Percorre a string (vetor) de trás para frente e vai printando os characters em sequencia
		printf("%c", str[i] );
	}	

	printf("\n"); 							 // printa a quebra de linha exigida no enunciado



	return 0;
}
