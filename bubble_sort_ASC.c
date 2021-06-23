#include <stdio.h>

#define SIZE 6

int main(void)
{
    int arr[SIZE] = {3, 2, 1, 6, 5, 4};
    int sorted;

    for (int i = 0; i < SIZE - 1; i++)
    {
        sorted = 1;

        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // Line changed
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sorted = 0;
            }
        }

        if (sorted)
            break;
        
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    

    return 0;
}