#include <stdio.h>


int main(){

	struct Retangulo
	{
		double x;
		double y;
	}p1, p2, p3, p4;

	scanf("%lf %lf", &p1.x, &p1.y);			// input p1
	scanf("%lf %lf", &p2.x, &p2.y);			// input p2

	// Calculo da área

	float base   = p2.x - p1.x;
	float altura = p2.y - p1.y;
	float area = base * altura;


	printf("Area = %lf\n", area);




	return 0;
}
