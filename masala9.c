#include <stdio.h>

typedef struct
{
    char ismi[100];
    int soat;
} Xodim;

int main(void)
{
    FILE *fayl = fopen("xodimlar.txt", "r");
    if (fayl == NULL)
    {
        perror("xodimlar.txt faylini ochib bo'lmadi");
        return 1;
    }

    int soni;
    if (fscanf(fayl, "%d", &soni) != 1 || soni < 0)
    {
        fprintf(stderr, "Xodimlar sonini fayldan o'qib bo'lmadi.\n");
        fclose(fayl);
        return 1;
    }

    Xodim xodim;
    for (int i = 0; i < soni; i++)
    {
        if (fscanf(fayl, "%99s %d", xodim.ismi, &xodim.soat) != 2)
        {
            fprintf(stderr, "Xodim ma'lumotlarini fayldan o'qib bo'lmadi.\n");
            fclose(fayl);
            return 1;
        }

        printf("%s: %d som\n", xodim.ismi, xodim.soat * 15000);
    }

    fclose(fayl);
    return 0;
}