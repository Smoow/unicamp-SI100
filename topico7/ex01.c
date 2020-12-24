#include <stdio.h>
// Sem usar strlen

int main()
{
	char str[81];

	fgets(str, 80, stdin);

	// contador de caracteres

	int i;
	int total = 0;

	for (i = 0; str[i]; i++)
	{
		total++;
	}

	printf("A string digitada contém %d caracteres\n", total - 1);

	return 0;
}
