#include <stdio.h>

int main(){

	char ch;

	while ( (ch = getchar()) != 35){
		getchar();
		printf("%d\n", ch);
	}

	
	return 0;
}