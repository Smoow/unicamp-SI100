#include <stdio.h>

int main(){

	float p1 = 0;
	float p2 = 0;
	float p3 = 0;
	float exam = 0;

	printf("Nota da primeira prova: ");
	scanf("%f", &p1);
	printf("Nota da segunda prova: ");
	scanf("%f", &p2);
	printf("Nota da terceira prova: ");
	scanf("%f", &p3);

	float med = (p1 + p2 + p3) / 3;

	if (p1 >= 6 && p2 >=6 && p3 >= 6){
		printf("\nAprovado!!\n");
		printf("\nParabéns!! Sua média foi %.2f.\n\n", med );
	} 
	else if (p1 < 2 || p2 < 2 || p3 < 2){
		printf("\nReprovado!!\n");
		printf("\nSua média foi %.2f\n\n", med );
	}
	else {
		printf("Digite a nota do exame: ");
		scanf("%f", &exam);
		float medexam = ((med + exam) / 2);
		if  ( medexam >=5 ) {
			printf("\nAprovado!!\n");
			printf("Parabéns!! Sua média foi %.2f\n\n", medexam );
		} else{
			printf("\nReprovado!!\n");
			printf("Sua média foi %.2f\n\n", medexam );
		}
	}



	return 0;
}
