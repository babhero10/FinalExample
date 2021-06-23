#include <stdio.h>

int main(void)
{
    int arr1[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            // Swiping from arr1[i][j] to arr1[j][i]
            result[i][j] = arr1[j][i]; 
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}