#include <stdio.h>

int main() {

	int ch;

	printf("Digite uma entrada: ");
	ch = getchar();
	printf("entrada = \'%c\', saída = \'%c\' \n", ch, ch + 1 );
	return 0;
}
