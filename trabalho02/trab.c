#include <stdio.h>

int main(){

	int i;
	int n;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	
	while (1){

			scanf("%d", &n);

			if (n == 0)
				return 0;

			else {

				if (1 <= n && n <= 20){         // limite de questoes

					for (i=0; i<n; i++){

						scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

						// verificando se só há uma alternativa assinalada
						if ( !(  (a > 127 && b > 127 && c > 127 && d > 127 && e > 127) || (a <= 127 && b <= 127) || (a <= 127 && c <= 127) || (a <= 127 && d <= 127) || (a <= 127 && e <= 127) || (b <= 127 && c <= 127) || (b <= 127 && d <= 127) || (b <= 127 && e <= 127) || (c <= 127 && d <= 127) || (c <= 127 && e <= 127) || (d <= 127 && e <= 127) )) {


						// verificando qual foi a alternativa
							if ( (a <= 127) && ( (b > 127) && (c > 127) && (d > 127) && (e > 127) ) )
								printf("A\n");
							if ( (b <= 127) && ( (a > 127) && (c > 127) && (d > 127) && (e > 127) ) )
								printf("B\n");
							if ( (c <= 127) && ( (b > 127) && (a > 127) && (d > 127) && (e > 127) ) )
								printf("C\n");
							if ( (d <= 127) && ( (b > 127) && (c > 127) && (a > 127) && (e > 127) ) )
								printf("D\n");
							if ( (e <= 127) && ( (b > 127) && (c > 127) && (d > 127) && (a > 127) ) )
								printf("E\n");
						} 

						else {
							printf("*\n");
						}
					}
				}
				else {
					printf("Numero de questoes fora dos limites permitidos!\n");
					break;
				}
			}
		}


	return 0;
}