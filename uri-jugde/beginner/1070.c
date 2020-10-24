#include <stdio.h>

int main() {

    int X;
    scanf("%d", &X);

    if ((X % 2) == 0) {

        for (int i = 1; i < 12; i += 2) {
            int sum = X + i;
            printf("%d\n", sum);
        }

    }

    else {
        for (int i = 0; i < 12; i += 2) {
            int sum = X + i;
            printf("%d\n", sum);
        }
    }


    return 0;
}