#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int a = 20;



void fun()
{
    int a = 50;
    printf("The value of a in the scope of function fun is: %d\n" , a++);
    return;
}

void changeGlobalVariable()
{
    printf("The value of a in the global scope is: %d\n" , a++);
}

int main()
{
    printf("%c" , '\n');

    int a = 10;
    printf("The value of a in the scope of the main function is: %d\n\n" , a);

    for(int i = 1 ; i <= 10 ; i++)
    {
        fun();
    }

    printf("%c" , '\n');

    for(int i = 1 ; i <= 10 ; i++)
    {
        changeGlobalVariable();
    }

    printf("%c" , '\n');
    return 0;
}