#include <stdio.h>

int main() {

    int a, b;
    float c;

    scanf("%d %d %f", &a, &b, &c);
    float salary = b * c;

    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}