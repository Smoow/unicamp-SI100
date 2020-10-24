#include <stdio.h>

int main(){

	float arr[30];
	int contador, contador2;
	float soma = 0.0;
	float media = 0.0;

	for (contador = 0; contador < 30; contador++){
		scanf("%f", &arr[contador]);
		soma += arr[contador];
	}

	media = (soma / 30);
	printf("media = %f \n", media);

	for (contador2 = 0; contador2 < 30; contador2++){
		if (arr[contador2] > media){
			printf("o aluno %d esta acima da media, com uma nota de %f \n", contador2, arr[contador2]);
		}
	}










	return 0;
}
