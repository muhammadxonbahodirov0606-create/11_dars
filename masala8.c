#include <stdio.h>

int main(void)
{
    FILE *fayl = fopen("xaridlar.txt", "r");
    if (fayl == NULL)
    {
        perror("xaridlar.txt faylini ochib bo'lmadi");
        return 1;
    }

    int summa;
    int kattaXaridlar = 0;

    for (int i = 0; i < 5; i++)
    {
        if (fscanf(fayl, "%d", &summa) != 1)
        {
            fprintf(stderr, "Faylda 5 ta xarid summasi bo'lishi kerak.\n");
            fclose(fayl);
            return 1;
        }

        if (summa > 50000)
        {
            kattaXaridlar++;
        }
    }

    fclose(fayl);
    printf("Katta xaridlar soni: %d\n", kattaXaridlar);

    return 0;
}