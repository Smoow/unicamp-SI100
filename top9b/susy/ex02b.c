#include <stdio.h>

void soma(int *a, int *b, int *c, int *d){
	*a = *a + *c;
	*b = *b + *d;
	printf("%d + %di\n", *a, *b);
}

void mult(int *a, int *b, int *c, int *d){
	int aux = *a;
	*a = (*a * *c) - (*b * *d);
	*b = ((aux * *d) + (*b * *c));
	printf("%d + %di\n", *a, *b);
}

int main(){

	int a, b, c, d;
	char op;
	scanf("%d %d %c %d %d", &a, &b, &op, &c, &d);

	switch (op){
		case '+': 
			soma(&a, &b, &c, &d);
			break;

		case '*':
			mult(&a, &b, &c, &d);
			break;
	}


	return 0;
}
