#include <stdio.h>
#include <stdbool.h>

int main()
{
    char vowels[5] = {'a' , 'e' , 'i' , 'o' , 'u'};
    char ch;
    printf("Enter a lowercase english alphabet: ");
    scanf("%c" , &ch);
    bool isVowel = false;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(vowels[i] == ch)
        {
            isVowel = true;
            break;
        }
    }
    if(isVowel == true)
    {
        printf("The given character is a vowel.\n");
    }
    else
    {
        printf("The given character is not a vowel.\n");
    }
    return 0;
}