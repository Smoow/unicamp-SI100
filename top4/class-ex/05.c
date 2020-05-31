#include <stdio.h>

int main(){

	int n, imp = 0, par = 0;

	printf("digite 10 numeros: \n");

	while (par + imp < 10){
		scanf("%d", &n);
		if (n % 2 == 0){
			par++;
		}
		else {
			imp++;
		}
	}

	printf("%d pares, %d impares\n", par, imp);

	return 0;
}