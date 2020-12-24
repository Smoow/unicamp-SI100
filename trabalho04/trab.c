#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	struct funcionario
	{
		char nome[101];
		float base;
		float comissao;
		float total;
	};

	char temp;
	char fim[] = "FIM";
	char temp3[101];
	float temp4;
	int i;
	int temp2;
	float salarios[100] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	struct funcionario *pont;
	pont = (struct funcionario *)malloc(100 * sizeof(struct funcionario));

	for (i = 0; i < 101; i++)
	{
		scanf(" %[^\n]", pont[i].nome);
		scanf("%c", &temp);

		if (strcmp(fim, pont[i].nome) == 0)
		{
			for (int f = 0; f < 100; f++) //Ordem alfabetica [nomes]
				for (int d = f + 1; d < 100; d++)
				{
					if (strcmp(pont[f].nome, pont[d].nome) > 0)
					{
						strcpy(temp3, pont[f].nome);
						strcpy(pont[f].nome, pont[d].nome);
						strcpy(pont[d].nome, temp3);
						temp4 = pont[f].total;
						pont[f].total = pont[d].total;
						pont[d].total = temp4;
					}
				}

			for (int j = 99; j > 0; j--)
			{ //Salarios por ordem crescente
				for (int k = 0; k < j; k++)
				{
					if (salarios[k] > salarios[k + 1])
					{
						temp2 = salarios[k];
						salarios[k] = salarios[k + 1];
						salarios[k + 1] = temp2;
					}
				}
			}

			printf("Folha de Pagamento\n\n");
			for (int n = 0; n < 100; n++)
			{
				if (salarios[n] != 0.0)
				{
					printf("Salario no Mes: R$ %.2f\n", salarios[n]);
					for (int l = 0; l < 101; l++)
					{
						if ((pont[l].total == salarios[n]))
							printf("- %s\n", pont[l].nome);
					}
					printf("\n");
				}
			}
			return 0;
		}

		scanf("%f", &pont[i].base);
		scanf("%f", &pont[i].comissao);

		int dif = 1;

		pont[i].total = pont[i].comissao + pont[i].base;
		for (int k = 0; k < 100; k++)
		{ //Verificacao para encontrar o salario total, sem repeticoes
			if (pont[i].total == salarios[k])
			{
				dif = 0;
				break;
			}
		}

		if (dif == 1)
			salarios[i] = pont[i].total;
	}

	return 0;
}
