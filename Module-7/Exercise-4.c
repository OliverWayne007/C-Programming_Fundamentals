#include <stdio.h>
#include <stdlib.h>

int my_atoi(char* s)
{
    return atoi(s);
}

int main()
{
    char str[100];
    printf("Enter a numberic string: ");
    scanf("%s" , str);
    getchar();
    int num = my_atoi(str);
    printf("String to integer: %d\n" , num);
    return 0;
}