#include <stdio.h>

void f(int a);

int main(){

	int a;
	a = 1;
	printf("1: a = %d\n", a);
	f(a);
	
	return 0;
}	

void f(int a){
	a = 2;
	printf("2: a = %d\n", a);
	printf("3: a = %d\n", a);
}		
