#include <stdio.h>


void func(int a[10], int b[10]) {

	int i;

	for (i = 0; i < 10; i++){
		b[i] = a[i] * a[i] * a[i];
	}

	for (i = 0; i < 10; i++){
		printf("%d\n", b[i]);
	}

}

int main() {

	int a[10], b[10];
	int i;

	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}

	func(a, b);

	return 0;
}
