#include <stdio.h>

int main(){

	int n, s, fatn, fats, fatsub;

	printf("entre com o valor de n: ");
	scanf("%d", &n);
	printf("entre com o valor de s: ");
	scanf("%d", &s);

	int sub = n - s;

	// fatorial de cada um

	for (fatn=1; n>1; n--){
		fatn = fatn * n;
	}

	for (fats=1; s>1; s--){
		fats = fats * s;
	}

	for (fatsub=1; sub>1; sub--){
		fatsub = fatsub * sub;
	}

	// conta principal

	printf("%d\n", fatn / (fats * (fatsub)) );

	return 0;
}