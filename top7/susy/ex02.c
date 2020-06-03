#include <stdio.h>
#include <string.h>

int main(){

	char palavra[81];
	char invertida[81];
	int i, j;

	fgets(palavra, 81, stdin);            // Guarda a palavra em palavra[]

	palavra[strlen(palavra) -1] = '\0';   // Retira o input do enter.

	for (i = strlen(palavra) - 1; i >= 0; i--){  // Inverte a palavra
		for (j = 0; j < 81; j++){
			invertida[j] = palavra[i--];
			
		}
	}	/*printf("\n");                          // Pula uma linha

	Caso esteja vendo aqui, isso fez parte dos testes hehe ;)

	printf("-------------\n");
	printf("-------------\n");				
	printf("original: %s\n", palavra);
	printf("invertida: %s\n", invertida);
	printf("-------------\n");
	printf("-------------\n");
	printf("Comparar\n");*/

	int comparador = strcasecmp(palavra, invertida);
	if (comparador == 0) {
		printf("Esta palavra e um palindromo\n");
	} else {
		printf("Esta palavra nao e um palindromo\n");
	}


	return 0;
}
