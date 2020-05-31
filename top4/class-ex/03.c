#include <stdio.h>

int main(){

	char ch;

	printf("char - int - hexa\n");

	for (ch = 32; ch <= 126; ch++){
		printf("%c - %d - %x\n", ch, ch, ch);
	}

	return 0;
}