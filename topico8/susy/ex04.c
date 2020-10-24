#include <stdio.h>

int main(){

	struct Retangulo
	{
		double x;
		double y;
	}p1, p2, p3, p4;

	scanf("%lf %lf", &p1.x, &p1.y);			// input p1
	scanf("%lf %lf", &p2.x, &p2.y);			// input p2
	scanf("%lf %lf", &p3.x, &p3.y);			// input p3
	scanf("%lf %lf", &p4.x, &p4.y);			// input p4

	if ( (p3.x >= p1.x) && (p3.y >= p1.y) && (p4.x <= p2.x) && (p4.y <= p2.y)){
		printf("o segundo retangulo esta contido no primeiro\n");
	} else {
		printf("o segundo retangulo nao esta contido no primeiro\n");
	}



	return 0;
}
