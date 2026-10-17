#include <stdio.h>

typedef struct
{
    char nomi[100];
    int narxi;
    int miqdori;
} Mahsulot;

int main(void)
{
    Mahsulot mahsulot;

    scanf("%99s", mahsulot.nomi);
    scanf("%d", &mahsulot.narxi);
    scanf("%d", &mahsulot.miqdori);

    printf("Mahsulot: %s\n", mahsulot.nomi);
    printf("Narxi: %d\n", mahsulot.narxi);
    printf("Miqdori: %d\n", mahsulot.miqdori);
    printf("Ombor qiymati: %d\n", mahsulot.narxi * mahsulot.miqdori);

    return 0;
}