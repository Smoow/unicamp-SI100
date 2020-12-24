#include <stdio.h>
#define N 20

int main()
{
	int matriz[N][N];
	int NUM_LIM, NUM_COL, l, c;

	//Definir o tamanho da matriz
	scanf("%d %d", &NUM_LIM, &NUM_COL);

	//Preencher a matriz
	for (l = 0; l < NUM_LIM; l++)
		for (c = 0; c < NUM_COL; c++)
			scanf("%d", &matriz[l][c]);

	//Transposta
	for (c = 0; c < NUM_COL; c++)
	{
		for (l = 0; l < NUM_LIM; l++)
		{
			printf("%d ", matriz[l][c]);
		}
		printf("\n");
	}

	return 0;
}
