#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int rows , cols;

    printf("Enter the number of rows: ");
    scanf("%d" , &rows);
    getchar();

    printf("Enter the number of cols: ");
    scanf("%d" , &cols);
    getchar();

    // Syntax for creating a dynamic 2-D array in C
    int** matrix = (int**) malloc ( rows * sizeof(int*) );

    for(int row = 0 ; row < rows ; row++)
    {
        matrix[row] = (int*) malloc ( cols * sizeof(int) );
    }

    printf("Enter the elements of the matrix: \n");

    for(int row = 0 ; row < rows ; row++)
    {
        for(int col = 0 ; col < cols ; col++)
        {
            matrix[row][col] = row * col;
        }
    }

    for(int row = 0 ; row < rows ; row++)
    {
        for(int col = 0 ; col < cols ; col++)
        {
            printf("%d " , matrix[row][col]);
        }
        printf("%c" , '\n');
    }

    free(matrix);

    return 0;
}