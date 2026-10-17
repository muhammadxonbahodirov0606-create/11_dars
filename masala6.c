#include <stdio.h>

void chiqar(int n)
{
    if (n <= 0)
    {
        printf("Xabar yuborildi!\n");
        return;
    }

    printf("%d\n", n);
    chiqar(n - 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    chiqar(n);

    return 0;
}