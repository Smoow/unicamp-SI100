#include <stdio.h>

int main() {

	char op = 0;
	float num1, num2 = 0;
	scanf("%f%c%f",&num1, &op, &num2);
	float sum = (num1 + num2);
	float sub = (num1 - num2);
	float mult = (num1 * num2);
	float div = (num1 / num2);

	if ((op == '+') || (op == '-') || (op == '*') || (op == '/')) {
	
		if (op == '+')
			printf("%.3f%c%.3f=%.3f\n",num1, op, num2, sum);

		if (op == '-')
			printf("%.3f%c%.3f=%.3f\n",num1, op, num2, sub);

		if (op == '*')
			printf("%.3f%c%.3f=%.3f\n",num1, op, num2, mult);

		if (op == '/')
			printf("%.3f%c%.3f=%.3f\n",num1, op, num2, div);
	}

	else {
		printf("Operador invalido\n");
	}


	return 0;
}