#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int rows , cols;

    printf("Enter the number of rows: ");
    scanf("%d" , &rows);

    while(getchar() != '\n');

    printf("Enter the number of cols: ");
    scanf("%d" , &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix: \n");

    for(int row = 0 ; row < rows ; row++)
    {
        for(int col = 0 ; col < cols ; col++)
        {
            scanf("%d" , &matrix[row][col]);
        }
        while(getchar() != '\n');
    }

    int target;
    printf("Enter the target: ");
    scanf("%d" , &target);

    bool targetFound = false;

    for(int row = 0 ; row < rows ; row++)
    {
        for(int col = 0 ; col < cols ; col++)
        {
            if(matrix[row][col] == target)
            {
                targetFound = true;
                break;
            }
        }
        if(targetFound == true)
        {
            break;
        }
    }

    if(targetFound == true)
    {
        printf("Target Found ! \n");
    }
    else
    {
        printf("Target not found !\n");
    }

    return 0;
}