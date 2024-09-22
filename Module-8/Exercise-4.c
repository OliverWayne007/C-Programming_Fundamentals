#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("%c" , '\n');

    // Creating an array dynamically
    int* arr = (int*) malloc ( 5 * sizeof(int) );

    // Printing the base address of the array stored in arr
    printf("The base address stored in arr is: %p\n" , arr);

    // Entering the elements of the array
    for(int i = 0 ; i < 5 ; i++)
    {
        *(arr + i) = i;
    }

    // Printing the elements of the array
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("arr[%d]: %d\n" , i , arr[i]);
    }
    printf("%c" , '\n');

    // Reallocating the memory/Adding extra memory while maintaining the already exsisting content.
    arr = (int*) realloc ( arr , 10 * sizeof(int) );

    // Printing the base address of the array stored in arr
    printf("The base address stored in arr is: %p\n" , arr);

    // Intializes the extra added memory locations with some garbage values.
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("arr[%d]: %d\n" , i , arr[i]);
    }
    printf("%c" , '\n');

    // Assigning values to the extra added memory locations
    for(int i = 5 ; i < 10 ; i++)
    {
        *(arr + i) = i;
    }

    // Printing the reallocated array
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("arr[%d]: %d\n" , i , arr[i]);
    }
    printf("%c" , '\n');

    // Deallocating the array
    free(arr);

    return 0;
}