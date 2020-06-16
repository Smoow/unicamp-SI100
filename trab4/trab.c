#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//encontrar uma maneira de printar apenas um total para cada repetição (caso exista repetição)

int main(){

	struct funcionario
	{
		char nome[101];
		float base;
		float comissao;
		float total;
	};

	char temp;
	char fim[] = "FIM";
	int n, i;

	struct funcionario *pont;
	pont = (struct funcionario*) malloc(100 * sizeof(struct funcionario));

	for (i = 0; i < 101; i++)
	{
		
		scanf(" %[^\n]", pont[i].nome);
		scanf("%c", &temp);
		
		if (strcmp(fim, pont[i].nome) == 0){
			printf("Folha de Pagamento\n\n");
			for (int n = 0; n < i; n++)
			{
				printf("Salario no Mes: R$ %.2f\n", pont[n].total);
				
				//printf("%s\n", pont[n].nome);
				//printf("Base = R$ %.2f\n", pont[n].base);
				//printf("Comissao = R$ %.2f\n", pont[n].comissao);
				//printf("Total = R$ %.2f\n", pont[n].total);
				//printf("---------------\n");
			}
			return 0;
		}

		scanf("%f", &pont[i].base);
		scanf("%f", &pont[i].comissao);

		pont[i].total = pont[i].comissao + pont[i].base;

	}

	return 0;
}
