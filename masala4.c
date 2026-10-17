#include <stdio.h>

int main(void)
{
    int orinlar[3][4];
    int qator, orinDara;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &orinlar[i][j]);
        }
    }

    scanf("%d %d", &qator, &orinDara);

    printf("%d-qator, %d-orindiq: ", qator, orinDara);
    if (orinlar[qator - 1][orinDara - 1] == 0)
    {
        printf("Bosh\n");
    }
    else
    {
        printf("Band\n");
    }

    return 0;
}