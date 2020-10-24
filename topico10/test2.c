#include <stdio.h>
#include <stdlib.h>

int main(){

	struct ponto{
		float x;
		float y;
	} p1;

	struct ponto* pp;
	pp = &p1;

	p1.x = 10.0;
	p1.y = 5.0;

	//pp->x = 5.5;

	printf("X = %.2f - Y = %.2f\n", (*pp).x, pp->y); // pode usar p1.x tbm



	return 0;
}
