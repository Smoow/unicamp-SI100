#include <stdio.h>

int main(){

	int num;
	long resposta;
	while (1){
		printf("Digite um numero: \n");
		scanf("%d", &num);
		resposta = 1;
		while (num > 1){
			resposta *= num--;
		}
		printf("O fatorial eh: %ld\n", resposta);
	}



	return 0;
}