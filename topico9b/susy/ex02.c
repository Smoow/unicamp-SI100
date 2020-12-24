#include <stdio.h>

void soma(int a, int b, int c, int d)
{
	printf("%d + %di\n", a + c, b + d);
}

void mult(int a, int b, int c, int d)
{
	printf("%d + %di\n", (a * c - b * d), (a * d + b * c));
}

int main()
{
	int a, b, c, d;
	char op;
	scanf("%d %d %c %d %d", &a, &b, &op, &c, &d);

	switch (op)
	{
		case '+':
			soma(a, b, c, d);
			break;

		case '*':
			mult(a, b, c, d);
			break;
	}

	return 0;
}
