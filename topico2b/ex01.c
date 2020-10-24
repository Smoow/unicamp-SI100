#include <stdio.h>

int main() {
	float p1, p2, t;
	printf("Digite a nota da primeira prova: ");
	scanf("%f", &p1);
	printf("Digite a nota da segunda prova: ");
	scanf("%f", &p2);
	printf("Digite a nota do trabalho: ");
	scanf("%f", &t);
	printf("Sua média final é %.1f\n", (p1+p2+t)/3);
	return 0;
}
