#include <stdio.h>
#include <math.h>

float soma(float n1, float n2);
float sub(float n1, float n2);
float mult(float n1, float n2);
float dv(float n1, float n2);
float elev(float n1, float n2);

int main(){

	char operador;
	float n1 = 0, n2 = 0;
	scanf("%f%c%f", &n1, &operador, &n2);

	switch (operador){
		case '+': printf("%.3f\n", soma(n1, n2));
		break;

		case '-': printf("%.3f\n", sub(n1, n2));
		break;

		case '*': printf("%.3f\n", mult(n1, n2));
		break;

		case '/': printf("%.3f\n", dv(n1, n2));
		break;

		case '^': printf("%.3f\n", elev(n1, n2));
		break;
	}

	return 0;
}

float soma(float n1, float n2){
	return (n1 + n2);
}

float sub(float n1, float n2){
	return (n1 - n2);
}
float mult(float n1, float n2){
	return (n1 * n2);
}
float dv(float n1, float n2){
	return (n1 / n2);
}
float elev(float n1, float n2){
	return (pow(n1, n2));
}
