#include <stdio.h>

int main(){

	int n, r = 0, i = 1, t = 1;

	scanf("%d", &n);

	while ( i <= n){
		r = r + t;
		t += 2;
		i++;
	}

	printf("quadrado = %d\n", r);

	return 0;
}
