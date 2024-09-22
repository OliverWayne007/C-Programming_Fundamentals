#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d" , &n);

    while(getchar() != '\n');

    int* arr = (int*)malloc(n * sizeof(int));

    printf("Enter the elements of the array: \n");

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , arr + i);
        getchar();
    }

    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for(int i = 0 ; i < n ; i++)
    {
        if(maximum < *(arr + i))
        {
            maximum = *(arr + i);
        }
        if(minimum > *(arr + i))
        {
            minimum = *(arr + i);
        }
    }

    printf("The maximum number in the array is: %d\n" , maximum);
    printf("The minimum number in the array is: %d\n" , minimum);

    return 0;
}