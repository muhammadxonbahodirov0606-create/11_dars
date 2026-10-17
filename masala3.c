#include <stdio.h>

void almashtir(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    almashtir(&a, &b);
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}