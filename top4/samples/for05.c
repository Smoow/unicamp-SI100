#include <stdio.h>

int main(){


	printf("digite 'a':");
	char ch = getchar();
	
	if (ch != 'a'){
		for (;;){
			printf("Loop infinito ;)\n");
		}
	}
	else {
		printf("ok\n");
	}

	return 0;
}