#include <stdio.h>

int main(){

	float cel;

	printf("Digite a temperatura em graus celsius: ");
	scanf("%f", &cel);

	float far = (cel*1.8) + 32;

	printf("%.1f graus Celsius correspondem a %.1f graus Farenheit.\n", cel, far );
	return 0;
}