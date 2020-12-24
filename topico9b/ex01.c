#include <stdio.h>
#include <math.h>

void media(float *n1, float *n2, char *c)
{

	float nota1 = *n1;
	float nota2 = *n2;
	float media = 0;
	char tipo = *c;

	switch (tipo)
	{
		case 'A':
			media = (nota1 + nota2) / 2;
			break;

		case 'B':
			media = sqrt(nota1 * nota2);
			break;

		default:
			printf("\nApenas 'A' ou 'B'!\n");
			printf("Média está errada!\n\n\n");
			break;
	}

	*n1 = media;
}

int main()
{

	float nota1 = 0, nota2 = 0;
	scanf("%f %f", &nota1, &nota2);
	char c;
	scanf(" %c", &c);

	media(&nota1, &nota2, &c);

	printf("Média = %.2f\n", nota1);

	return 0;
}
