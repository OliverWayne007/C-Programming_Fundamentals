#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun1(int* arr)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    // sizeof(arr) = 8 bytes
    // sizeof(arr[0]) = 4 bytes
    printf("%lu\n" , sizeof(arr) );
    printf("%lu\n" , sizeof(arr[0]) );
    printf("%lu\n" , size);
    printf("%c" , '\n');
}

void fun2(int arr[])
{
    int size = sizeof(arr)/sizeof(arr[0]);
    // sizeof(arr) = 8 bytes
    // sizeof(arr[0]) = 4 bytes
    printf("%lu\n" , sizeof(arr) );
    printf("%lu\n" , sizeof(arr[0]) );
    printf("%lu\n" , size);
    printf("%c" , '\n');
}

int main()
{
    int arr1[] = {1 , 2 , 3 , 4 , 5};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    printf("%d\n" , size);  // 5
    
    printf("%c" , '\n');
    
    fun1(arr1);  // 8 4 2
    
    fun2(arr1);
    
    int* arr = (int*) malloc (5 * sizeof(int));
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n" , n);  // 2
    
    printf("%c" , '\n');
    
    char* str0 = "helloworld";
    int str0_size = sizeof(str0)/sizeof(str0[0]);
    printf("%d\n", strlen(str0)); // 10
    printf("%d\n" , str0_size); // 8
    
    printf("%c" , '\n');
    
    char str[] = "helloworld";
    int str_size = sizeof(str)/sizeof(str[0]);
    printf("%d\n", strlen(str)); // 10
    printf("%d\n" , str_size); // 11
    
    printf("%c" , '\n');
    
    char str1[] = {'h' , 'e' , 'l', 'l' , 'o' , 'w' , 'o' , 'r' , 'l' , 'd'};
    int str_size1 = sizeof(str1)/sizeof(str1[0]);
    printf("%d\n" , str_size1); // 10
    printf("%d\n" , strlen(str1));  // undefined behaviour because str1 is not null-terminated.
    
    printf("%c" , '\n');
    
    return 0;
}