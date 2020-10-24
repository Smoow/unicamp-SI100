#include <stdio.h>

int main(){

	int vec[20] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400};
	int i, j, temp;
	int contador;

	for (j = 0; j < 20; j++){

		for (i = 20; i > j; i--){
			if (vec[i] > vec[i-1]) {
				temp = vec[i];
				vec[i] = vec[i-1];
				vec[i-1] = temp;
			}
		}
	}


	for (contador = 0; contador < 20; contador++){
		printf("%d\n", vec[contador] );
	}

	
	return 0;
}
