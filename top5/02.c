#include <stdio.h>

int main(){

	int produtos[10];
	int p, p2;
	float valor[10];
	int v, v2;

	for (p = 0; p<10; p++){
		scanf("%d", &produtos[p]);
	}

	for (v = 0; v<10; v++){
		scanf("%f", &valor[v]);
	}

	float lucro = 0.0;
	int venda = 0;

	for (v2 = 0; v2 < 10; v2++){
		lucro += (produtos[v2]*valor[v2]);
	}

	for (p2 = 0; p2 < 10; p2++){
		venda += produtos[p2];
	}

	printf("o lucro foi de %.3f e a quantidade de produtos vendidos foi de %d\n", lucro, venda);

	return 0;
}
