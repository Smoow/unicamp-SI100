#include <stdio.h>

int main(){

	char ch;
	printf("digite 'X': \n");
	while((ch = getchar()) != 'X'){
		printf("%c\n", ch);
	}

	return 0;
}