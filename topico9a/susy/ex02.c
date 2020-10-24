#include <stdio.h>
#include <math.h>

float media(char chr, float n1, float n2);

int main(){

	char chr = getchar();
	float n1 = 0, n2 = 0;
	scanf("%f %f", &n1, &n2);

	printf("%.3f\n", media(chr, n1, n2));

	return 0;
}

float media(char chr, float n1, float n2){

	if (chr == 'A'){
		return ((n1 + n2) / 2);
	}
	else if (chr == 'B'){
		return sqrt(n1 * n2);
	}

	return 0;
}
