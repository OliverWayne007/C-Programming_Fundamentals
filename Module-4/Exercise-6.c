#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    printf("%c" , '\n');

    char validPassword[] = "12345";

    // printf("%d\n" , strlen(validPassword));

    char userInput[6];

    memset(userInput , '\0' , sizeof(userInput) );

    printf("Enter the 5 digit passcode: ");
    scanf("%s" , userInput);

    int len = strlen(validPassword);

    bool passwordMatch = true;

    for(int i = 0 ; i < len ; i++)
    {
        if(userInput[i] != validPassword[i])
        {
            printf("Access denied. Invalid passcode !\n");
            passwordMatch = false;
            break;
        }
    }
    if(passwordMatch == true)
    {
        printf("Access Granted. Welcome !\n");
    }

    printf("%c" , '\n');

    return 0;
}