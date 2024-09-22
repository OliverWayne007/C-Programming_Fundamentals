#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    char str[11];
    printf("Enter the string: ");
    scanf("%s" , str);
    getchar();
    int len = strlen(str);
    int end = len - 1 , minSteps = 11;
    while(end > 0)
    {
        int steps = len - 1 - end;
        int start = 0;
        while(start < end)
        {
            if(str[start] == str[end])
            {
                if(minSteps > steps)
                {
                    minSteps = steps;
                }
                break;
            }
            else
            {
                steps++;
            }
            start++;
        }
        end--;
    }
    if(minSteps == 11)
    {
        printf("%d\n" , -1);
    }
    else
    {
        printf("%d\n" , minSteps);
    }
    return 0;
}