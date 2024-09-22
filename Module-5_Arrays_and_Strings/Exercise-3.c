#include <stdio.h>
#include<string.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    char text[100];
    char pattern[100];

    printf("Enter the text: \n");
    gets(text);

    printf("%c" , '\n');

    // while(getchar() != '\n');

    printf("Enter the pattern: \n");
    gets(pattern);

    printf("%c" , '\n');

    // while(getchar() != '\n');

    int textLen = strlen(text);
    int patternLen = strlen(pattern);

    int* occIndices = (int*)malloc(textLen * sizeof(int));

    int index = 0;

    int i = 0; 

    while(i < textLen)
    {
        int k = i;
        bool mismatch = false;
        int j = 0;
        while(j < patternLen && k < textLen)
        {
            if(pattern[j] != text[k])
            {
                mismatch = true;
                break;
            }
            else
            {
                j++;
                k++;
            }
        }
        if(mismatch == false)
        {
            occIndices[index] = i;
            ++index;
        }
        i++;
    }

    printf("Occurrence indices: \n");
    for(int i = 0 ; i < index ; i++)
    {
        printf("%d " , occIndices[i]);
    }

    printf("%c" , '\n');

    free(occIndices);

    return 0;
}