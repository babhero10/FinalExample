#include <stdio.h>

#define SIZE 6

int main(void)
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6};

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int F = 0, L = SIZE - 1, found = 0;
    int M;

    while (F <= L)
    {
        M = (F + L) / 2;
        if (number == arr[M])
        {
            found = 1;
            break;
        }
        else if (number < arr[M])
        {
            L = M - 1; // Line swipe
        }
        else
        {
            F = M + 1; // Line swipe
        }
    }

    if (found)
        printf("Found!\n");
    else
        printf("Not found!\n");

    return 0;
}