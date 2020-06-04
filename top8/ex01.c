#include <stdio.h>
#include <math.h>

int main(){

	struct Ponto
	{
		double x;
		double y;
	}p1, p2;

	scanf("%lf %lf", &p1.x, &p1.y);			// input p1
	scanf("%lf %lf", &p2.x, &p2.y);			// input p2

	printf("Ponto 1 - x = %lf | y = %lf\n", p1.x, p1.y);
	printf("Ponto 2 - x = %lf | y = %lf\n", p2.x, p2.y);

	// Calculo distancia euclidiana

	double difX = p2.x - p1.x;
	double difY = p2.y - p1.y;
	double distancia = 0;

	distancia = sqrt(pow(difX, 2) + pow(difY, 2));

	printf("A distancia euclidiana entre os pontos é %lf\n", distancia);


	return 0;
}
