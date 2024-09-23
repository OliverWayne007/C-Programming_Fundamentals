#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    
    int* arr = (int*) malloc (n * sizeof(int) );
    for(int i = 0 ; i < n ; i++)
    {
        arr[i] = i;
    }
    
    printf("The elements of the array are: \n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("%c" , '\n');
    
    
    int** ptr_to_arr = &arr;
    
    printf("%p\n" , arr);
    printf("%p\n" , *(ptr_to_arr));
    
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ", (*ptr_to_arr)[i]);
    }
    printf("%c" , '\n');
    
    // arr = (int*) realloc( arr , (n + 1) * sizeof(int) );
    *ptr_to_arr = (int*) realloc( *ptr_to_arr , (n + 1) * sizeof(int) );
    
    printf("%p\n" , arr);
    printf("%p\n" , *(ptr_to_arr));
    
    // arr[n] = n;
    (*ptr_to_arr)[n] = n;
    for(int i = 0 ; i < n + 1 ; i++)
    {
        printf("%d " , (*ptr_to_arr)[i]);
    }
    printf("%c" , '\n');
    
    return 0;
}