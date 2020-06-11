#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	struct aluno
	{
		char nome[101];
		int ra;
		float p1;
		float p2;
	};

	char temp;
	int n, i;
	scanf("%d", &n);

	struct aluno *pont;
	pont = (struct aluno*) malloc(n * sizeof(struct aluno));

	for (i = 0; i < n; i++)
	{
		scanf("%c", &temp);
		scanf("%[^\n]", pont[i].nome);
		scanf("%d", &pont[i].ra);
		scanf("%f", &pont[i].p2);
		scanf("%f", &pont[i].p1);
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\t%s\t%.2f\n", pont[i].ra, pont[i].nome, (pont[i].p1 + pont[i].p2) / 2);
	}

	return 0;
}
