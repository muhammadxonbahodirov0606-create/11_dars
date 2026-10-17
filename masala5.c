#include <stdio.h>

int main(void)
{
    char ism[100];
    char familiya[100];

    scanf("%99s %99s", ism, familiya);

    printf("%c%s\n", ism[0], familiya);

    return 0;
}