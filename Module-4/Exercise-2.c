#include<stdio.h>
#include <stdbool.h>

int main()
{
    char keypad[] = {'1' , '2' , 'A' , 'B' , '*' , '#'};
    
    char inputChar;
    printf("Enter a character from the keypad: ");
    scanf("%c" , &inputChar);
    
    bool isValidKey = false;
    for(int i = 0 ; i < sizeof(keypad)/sizeof(keypad[0]) ; i++)
    {
        if(inputChar == keypad[i])
        {
            printf("You pressed the key %c\n" , inputChar);
            isValidKey = true;
            break;
        }
    }
    if(isValidKey == false)
    {
        printf("Please enter a valid key from the keypad.....\n");
    }
    else
    {
        if(inputChar == '1')
        {
            printf("Action: Perform action 1\n");
        }
        else if(inputChar == '2')
        {
            printf("Action: Perform action 2\n");
        }
        else if(inputChar == 'A')
        {
            printf("Action: Perform action A\n");
        }
        else if(inputChar == 'B')
        {
            printf("Action: Perform action B\n");
        }
        else if(inputChar == '*')
        {
            printf("Action: Perform action *\n");
        }
        else if(inputChar == '#')
        {
            printf("Action: Perform action #\n");
        }
    }
    return 0;
}