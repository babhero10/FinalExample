#include <stdio.h>

int main(void)
{
    int arr1[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[][3] = {0, 1, 2, 1, 10, 7, 0, 2, 1};
    int result[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = arr1[i][j] + arr2[i][j];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}