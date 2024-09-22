#include <stdio.h>

int main()
{
    char input[100];
    printf("Enter two numbers and an arithmetic operator separated by spaces: \n");
    fgets(input , 100 , stdin);

    printf("%s\n" , input);

    int number1 = 0 , number2 = 0 , i = 0;
    while(input[i] != ' ')
    {
        number1 = number1 * 10 + (input[i] - '0');
        i++;
    }
    i++;
    while(input[i] != ' ')
    {
        number2 = number2 * 10 + (input[i] - '0');
        i++;
    }
    i++;

    printf("number1: %d\n" , number1);
    printf("number2: %d\n" , number2);

    float result;
    if(input[i] == '+')
    {
        result = (float)number1 + (float)number2;
    }
    else if(input[i] == '-')
    {
        result = (float)number1 - (float)number2;
    }
    else if(input[i] == '*')
    {
        result = (float)number1 * (float)number2;
    }
    else if(input[i] == '/')
    {
        result = (float)number1 / (float)number2;
    }
    printf("Result: %.2f\n\n" , result);
    return 0;
}