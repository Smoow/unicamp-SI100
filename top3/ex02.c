#include <stdio.h>

int main(){

	int n, par = 0, impar = 0;

	while (par + impar < 10){
		scanf("%d", &n);
		if ( n % 2 == 0 ){
			par++;
		} else{
			impar++;
		}
	}

	printf("Quantidade de pares: %d\nQuantidade de impares: %d\n", par, impar);


	return 0;
}
