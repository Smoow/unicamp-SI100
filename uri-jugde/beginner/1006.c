#include <stdio.h>

int main(){

	float a, b, c, med;

	scanf("%f %f %f", &a, &b, &c);
	med = ((a * 2) + (b * 3) + (c * 5)) / 10;

	printf("MEDIA = %.1f\n", med);

	return 0;
}
