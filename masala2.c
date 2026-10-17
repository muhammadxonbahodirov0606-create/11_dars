#include <stdio.h>

double chegirma(double narx)
{
    return narx * 0.9;
}

int main()
{
    double narxlar[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &narxlar[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%.0f ", chegirma(narxlar[i]));
    }
    printf("\n");

    return 0;
}
