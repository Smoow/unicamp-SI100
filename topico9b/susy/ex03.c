#include <stdio.h>

void proced(int vetor[], int *min, int *max)
{
	int i;
	int n = *min; // Controlador do tamanho do vetor
				  // * Assume first element as maximum and minimum
	*max = vetor[0];
	*min = vetor[0];

	for (i = 0; i < n; i++) // Encontrar o valor máximo e substituir em 'max'
	{
		if (vetor[i] > *max)
		{
			*max = vetor[i];
		}
	}

	for (i = 0; i < n; i++) // Encontrar o valor mínimo e substituir em 'min'
	{
		if (vetor[i] < *min)
		{
			*min = vetor[i];
		}
	}
}

int main()
{
	int i, min;

	scanf("%d", &min);
	int vetor[min];

	int max = vetor[0];

	for (i = 0; i < min; i++)
		scanf("%d", &vetor[i]);

	proced(vetor, &min, &max);

	printf("maior valor: %d\n", max);
	printf("menor valor: %d\n", min);

	return 0;
}
