#include <stdio.h>

int main(){

	int Y = 0; // ANO
	scanf("%d", &Y);

	int G = (Y % 19) + 1;							// AUREO
	int C = (Y / 100) + 1;							// SECULO
	int X = ((3*C) / 4) - 12;						// FATOR 1
	int Z = ((8*C + 5) / 25) - 5;					// FATOR 2
	int E = (11*G + 20 + Z - X) % 30;				// EPACTA

	//	Se (E = 25) e (G > 11), ou se (E = 24), então some 1 a E;
	if ( ((E == 25) && (G == 11)) || (E == 24) ){
		E += 1;
	}

	//	Lua Cheia (N): faça N = 44 - E. Se N < 21, então faça N receber N + 30;
	int N = 44 - E;

	if (N < 21){
		N += 30;
	}

	//	Domingo de Páscoa (D): quociente da divisão inteira de 5Y por 4, menos (X + 10);

	int D = (5*Y / 4) - (X + 10);

	//	Dia e mês da Páscoa: Faça N receber (N + 7) menos o resto da divisão de (D + N) por 7. Se N > 31, a Páscoa será no dia (N - 31) de abril, 
	// caso contrário será em N de março.

	int pascoa = 0;
	int abril = 0;

	N = (N + 7) -  ((D + N) % 7);
	if ( N > 31){
		pascoa = N - 31;
		abril = 1;
	} else {
		pascoa = N;
		abril = 0;
	}


	// VERIFICAR SE O ANO É BISSEXTO

	int bissexto = 0;

	if( ((Y % 4) == 0) && (((Y % 100) != 0) || ((Y % 400) == 0)) ){
		bissexto = 1;
	} else{
		bissexto = 0;
	}


	// pascoa até 1st janeiro

	int dia_semana_jan = 0;

	if(abril == 0){
    	dia_semana_jan = 8 - ((pascoa + 28 + 31 + bissexto) % 7);
    	if (dia_semana_jan > 6)
    		dia_semana_jan -= 7;
	}
	else{
    	dia_semana_jan = 8 - ((pascoa + 31 + 28 + 31 + bissexto) % 7);
    	if (dia_semana_jan > 6)
    		dia_semana_jan -= 7;
	}

	// gambiarra para indicar os dias iniciais de cada mes, o (b) refere-se ao ano bissexto

  	int dia_semana_fev = (dia_semana_jan + 31) % 7;
 	int dia_semana_mar = (dia_semana_fev + 28) % 7;
 	int dia_semana_marb = (dia_semana_fev + 29) % 7;
 	int dia_semana_abr = (dia_semana_mar + 31) % 7;
 	int dia_semana_abrb = (dia_semana_marb + 31) % 7;
 	int dia_semana_mai = (dia_semana_abr + 30) % 7;
 	int dia_semana_maib = (dia_semana_abrb + 30) % 7;
 	int dia_semana_jun = (dia_semana_mai + 31) % 7;
 	int dia_semana_junb = (dia_semana_maib + 31) % 7;
 	int dia_semana_jul = (dia_semana_jun + 30) % 7;
 	int dia_semana_julb = (dia_semana_junb + 30) % 7;
 	int dia_semana_ago = (dia_semana_jul + 31) % 7;
 	int dia_semana_agob = (dia_semana_julb + 31) % 7;
 	int dia_semana_set = (dia_semana_ago + 31) % 7;
 	int dia_semana_setb = (dia_semana_agob + 31) % 7;
 	int dia_semana_out = (dia_semana_set + 30) % 7;
 	int dia_semana_outb = (dia_semana_setb + 30) % 7;
 	int dia_semana_nov = (dia_semana_out + 31) % 7;
 	int dia_semana_novb = (dia_semana_outb + 31) % 7;
 	int dia_semana_dez = (dia_semana_nov + 30) % 7;
 	int dia_semana_dezb = (dia_semana_novb + 30) % 7;




	//  print de janeiro, indiferente se é bissexto ou não

  	int l = 0, c = 0, i = 1;

	printf("Calendario do ano %d\n", Y);
	printf("|-----------------------------|\n");
	printf("|Janeiro                      |\n");
	printf("|-----------------------------|\n");
	printf("| dom seg ter qua qui sex sab |\n");
	printf("| ");
	for (l = 0; c < dia_semana_jan; c++){
		printf(" -- ");
	}

	for (l = 0; l < 1; l++){
		for (c = dia_semana_jan; c < 7; c++){
			printf(" %02d ", i++);
		}	printf("|\n");
	}

	for (l = 1; l < 6; l++){
		printf("| ");
		for (c = 0; c < 7; c++){
			if (i < 32){
				printf(" %02d ", i++);
			} else {
				printf(" -- ");
			}
		}	printf("|\n");
	}

	// a partir daqui tem a verificacao do bissexto...

		if (bissexto == 0){

		printf("|-----------------------------|\n");
		printf("|Fevereiro                    |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_fev; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_fev; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 29){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		} 

		printf("|-----------------------------|\n");
		printf("|Março                        |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_mar; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_mar; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Abril                        |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_abr; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_abr; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 31){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}


		printf("|-----------------------------|\n");
		printf("|Maio                         |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_mai; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_mai; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Junho                        |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_jun; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_jun; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 31){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Julho                        |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_jul; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_jul; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Agosto                       |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_ago; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_ago; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Setembro                     |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_set; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_set; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 31){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Outubro                      |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_out; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_out; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Novembro                     |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_nov; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_nov; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 31){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Dezembro                     |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_dez; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_dez; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}	printf("|-----------------------------|\n");
	}

	else {

		printf("|-----------------------------|\n");
		printf("|Fevereiro                    |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_fev; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_fev; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 30){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		} 

		printf("|-----------------------------|\n");
		printf("|Março                        |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_marb; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_marb; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Abril                        |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_abrb; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_abrb; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 31){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Maio                         |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_maib; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_maib; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Junho                        |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_junb; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_junb; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 31){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Julho                        |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_julb; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_julb; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Agosto                       |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_agob; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_agob; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Setembro                     |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_setb; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_setb; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 31){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Outubro                      |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_outb; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_outb; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Novembro                     |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_novb; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_novb; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 31){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}

		printf("|-----------------------------|\n");
		printf("|Dezembro                     |\n");
		printf("|-----------------------------|\n");
		printf("| dom seg ter qua qui sex sab |\n");

		i = 1;
		c = 0;
		l = 0;

		printf("| ");
		for (l = 0; c < dia_semana_dezb; c++){
			printf(" -- ");
		}

		for (l = 0; l < 1; l++){
			for (c = dia_semana_dezb; c < 7; c++){
				printf(" %02d ", i++);
			}	printf("|\n");
		}

		for (l = 1; l < 6; l++){
			printf("| ");
			for (c = 0; c < 7; c++){
				if (i < 32){
					printf(" %02d ", i++);
				} else {
					printf(" -- ");
				}
			}	printf("|\n");
		}	printf("|-----------------------------|\n");
	}


	return 0;
}
