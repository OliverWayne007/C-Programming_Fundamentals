#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    getchar();

    int* arr = (int*) malloc( n * sizeof(int) );

    printf("Enter the number of required tickets by each visitor: \n");

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , arr + i);
        getchar();
    }

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] <= 10)
        {
            continue;
        }
        else
        {
            printf("%d\n" , arr[i] - 10);
        }
    }

    return 0;
}