#include <stdio.h>

int main(){

	float notas[20];
	int i = 0;


	for (notas[i]; i<20; i++ ){
		scanf("%f", &notas[i]);
	}


	float contem;
	while(1){
		scanf("%f", &contem);
		if (contem > 0){
				int p = 0;
		
				while ( (notas[p] != contem) && (p < 20) ) {
					p++;
				}	if ( p < 20 ){
					printf("existe\n");
				}	else {
					printf("nao existe\n");
				}
			}
			else {
			return 0;
		}
	} 

	return 0;
}
