#include <stdio.h>

int main(){

	int first[10];
	int second[10];
	int f;
	int s;

	int contador;

	for (f = 0; f < 10; f++){
		scanf("%d", &first[f]);
	}

	for (s = 0; s < 10; s++){
		scanf("%d", &second[s]);
	}


	for (contador = 0; contador < 9; contador++){
		printf("%d|%d|", first[contador], second[contador] );
	}

	printf("%d|%d|\n", first[9], second[9] );



	return 0;
}
