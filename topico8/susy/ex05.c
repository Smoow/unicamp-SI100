#include <stdio.h>


int main(){

	struct corpo
	{
		float altura;
		float peso;
		char nome[41];
	} pessoa;

	scanf("%f %f %s", &pessoa.altura, &pessoa.peso, pessoa.nome);

	// Calculo do IMC com 3 casas decimais

	float imc = pessoa.peso / (pessoa.altura * pessoa.altura);

	printf("%.3f\n", imc);
	
	return 0;
}
