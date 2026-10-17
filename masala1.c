#include <stdio.h>

double chegirma(double narx) {
    return narx * 0.9;
}

int main(void) {
    double narxlar[5];

    for (int i = 0; i < 5; i++) {
        scanf("%lf", &narxlar[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%.10g", chegirma(narxlar[i]));
    }
    printf("\n");

    return 0;
}