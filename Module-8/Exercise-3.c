#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int global_var = 10;

int main()
{
    printf("%c" , '\n');

    int a = 10;
    printf("The address of integer variable a in the stack memory is: %p\n" , &a);

    int* b = (int*) malloc ( sizeof(b) );
    printf("The address of integer variable b in the heap memory is: %p\n" , b);

    printf("%c" , '\n');

    int local_var = 10;

    printf("The address of the local integer variable local_var is: %p\n" , &local_var);

    printf("The address of the global integer variable global_var is: %p\n" , &global_var);

    printf("%c" , '\n');

    return 0;
}