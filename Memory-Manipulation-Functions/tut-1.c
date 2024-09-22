#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr1[] = { 1 , 2 };
    int arr2[] = { 1 , 2 };
    
    if( memcmp(arr1 , arr2 , sizeof(int)) == 0 )
    {
        printf("Arrays are the same in memory !\n");
    }
    else
    {
        printf("Arrays are not the same in memory !\n");
    }
    return 0;
}