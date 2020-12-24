#include <stdio.h>

float volume_esfera(float raio)
{
	return (4 * 3.14159 * (raio * raio * raio)) / 3;
}

int main()
{
	float raio = 0;
	scanf("%f", &raio);

	printf("%.2f\n", volume_esfera(raio));

	return 0;
}
