#include <stdio.h>

int main(){

	int num = 0;

	printf("Digite um número inteiro: ");
	scanf("%d", &num);

	if (num%2 == 0){
		printf("Voce digitou um numero par.\n");
	}
	else{
		printf("Voce digitou um numero impar.\n");
	}


	return 0;
}