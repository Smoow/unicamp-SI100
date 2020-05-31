#include <stdio.h>

int main(){

	char ch;
	do {
		printf("Digite um caractere: ");
		scanf("%c", &ch);

		if ((ch >= 'a' && ch <= 'z')){
			ch = ch - 32;
		}
		printf("%c\n\n", ch);
	} while (ch != '=');


	return 0;
}