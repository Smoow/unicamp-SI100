#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

	float n;
	scanf("%f", &n);

	int i;

	float *poly = (float *) malloc(n * sizeof(float));
	for (i = 0; i <= n; i++){
		scanf("%f", &poly[i]);
	}

	float x;
	scanf("%f", &x);

	float total = 0.0;

	for (i = 0; i <= n; i++){
		total += poly[i] * (pow(x, i));
	}

	printf("%.2f\n", total);

	return 0;
}
