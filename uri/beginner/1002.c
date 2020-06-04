#include <stdio.h>


int main(){

	double pi = 3.14159;
	double R = 0;

	scanf("%lf", &R);

	double area = pi * (R*R);

	printf("A=%.4f\n", area);


	return 0;
}
