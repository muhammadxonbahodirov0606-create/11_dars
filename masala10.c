#include <stdio.h>

int binary_search(const int books[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if (books[middle] == target)
        {
            return middle;
        }
        else if (books[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    return -1;
}

int main(void)
{
    int books[12] = {
        102, 115, 128, 143,
        157, 169, 184, 201,
        218, 235, 249, 270};
    int bookId;

    scanf("%d", &bookId);

    int index = binary_search(books, 12, bookId);
    if (index != -1)
    {
        printf("Kitob topildi!\n");
        printf("Indeks: %d\n", index);
    }
    else
    {
        printf("Kitob topilmadi\n");
    }

    return 0;
}