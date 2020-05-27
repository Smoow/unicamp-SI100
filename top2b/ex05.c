#include <stdio.h>

int main(){

	int yo;
	float h;
	char sex;

	printf("Entre com dados (idade, altura, sexo): ");
	scanf("%d %f %c", &yo, &h, &sex);
	printf("A pessoa tem %d anos, %.2f de altura e é do sexo %c\n.", yo, h, sex );

	return 0;
}