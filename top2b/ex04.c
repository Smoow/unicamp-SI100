#include <stdio.h>

int main(){

	float far;

	printf("Digite a temperatura em graus Farenheit: ");
	scanf("%f", &far);

	float cel = (far - 32) * 5 / 9;

	printf("%.1f graus Farenheit correspondem a %.1f graus Celsius.\n", far, cel );
	return 0;
}