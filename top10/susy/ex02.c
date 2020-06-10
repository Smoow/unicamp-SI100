#include <stdio.h>
#include <stdlib.h>

int main(){

	int linha, coluna, i, tamanho;
	scanf("%d %d", &linha, &coluna);

	tamanho = linha;

	if (linha != coluna)
	{
		printf("Nao eh simetrica\n");
		return 0;
	}

	int** mat;  // Matriz Principal
	mat = (int**) malloc(linha*sizeof(int*));

	for (i = 0; i < linha; i++) {
		mat[i] = (int*) malloc(coluna*sizeof(int));
	}

	for (linha = 0; linha < tamanho; linha++) {
		for (coluna = 0; coluna < tamanho; coluna++) {
			scanf("%d", &mat[linha][coluna]);
		}
	}

	int** transp;  // Matriz Transposta
	transp = (int**) malloc(linha*sizeof(int*));

	for (i = 0; i < linha; i++) {
		transp[i] = (int*) malloc(coluna*sizeof(int));
	}

	for (linha = 0; linha < tamanho; linha++) {
		for (coluna = 0; coluna < tamanho; coluna++) {
			transp[coluna][linha] = mat[linha][coluna];
		}
	}	

	// Checagem

	for (linha = 0; linha < tamanho; linha++) {
		for (coluna = 0; coluna < tamanho; coluna++) {
			if (mat[linha][coluna] != transp[linha][coluna]) {
				printf("Nao eh simetrica\n");
				exit(0);
			}
		}
	}

	printf("Eh simetrica\n");


	return 0;
}
