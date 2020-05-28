#include <stdio.h>
#include <ctype.h>

int main(){

	char ch = 0;
	
	printf("Digite um caractere: ");
	scanf("%c", &ch);
	printf("O caractere \'%c\' maiusculo eh \'%c\'.\n", ch, toupper(ch) );

	return 0;
}