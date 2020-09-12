#include <stdio.h>

int main() {

    char name[10];
    double base, venda;
    scanf("%s %lf %lf", name, &base, &venda);
    double total = base + (venda * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}