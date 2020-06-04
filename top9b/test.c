#include <stdio.h>

int main(){

	int p, q, *r, *s;
	p = 30;
	q = 15;
	r = &p;
	s = &q;

	printf("p = %d\n", p);
	printf("q = %d\n", q);
	printf("r = %d\n", *r);
	printf("s = %d\n", *s);

	printf("--------------------\n");
	printf("--------------------\n");

	*r = 5 * 10;
	printf("valor de p = %d\n", p);
	printf("endereço de p = %p\n", &p);
	printf("valor de r = %p\n", r);
	printf("conteudo de r = %d\n", *r);
	printf("endereço de r = %p\n", &r);


	return 0;
}
