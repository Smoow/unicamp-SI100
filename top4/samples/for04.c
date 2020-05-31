#include <stdio.h>

	int main() {
		char ch;
		for (ch=getchar(); ch != 'X'; ch=getchar()){
			printf("%c", ch+1);
		}
	return 0;
}