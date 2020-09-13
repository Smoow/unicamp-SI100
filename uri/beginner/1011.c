#include <stdio.h>
#include <math.h>

int main() {

    double pi = 3.14159;
    double raio = 0; 
    raio = scanf("%lf", &raio);
    double volume = (4/3.0) * pi * pow(raio, 3);
    printf("VOLUME = %.3f\n", volume);

    return 0;
}