#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // char str1[] = "Hello";       // str1[] ----> {'H' , 'e' , 'l' , 'l' , 'o' , '\0'}
    // char str2[] = "Hello";       // str2[] ---> {'H' , 'e' , 'l' , 'l' , 'o' , '\0'}
    
    // char str1[5] = "Hello";      // str1[] ----> {'H' , 'e' , 'l' , 'l' , 'o'}
    // char str2[5] = "Hello";      // str2[] ----> {'H' , 'e' , 'l' , 'l' , 'o'}
    
    // char str1[6] = "Hello";     // str1[] ----> {'H' , 'e' , 'l' , 'l' , 'o' , '\0'}
    // char str2[6] = "Hello";     // str2[] ----> {'H' , 'e' , 'l' , 'l' , 'o' , '\0'}
    
    char str1[] = {'H', 'e' , 'l' , 'l' , 'o' };    // str1[] ----> {'H' , 'e' , 'l' , 'l' , 'o'}
    char str2[] = {'H', 'e' , 'l' , 'l' , 'o' };    // str2[] ----> {'H' , 'e' , 'l' , 'l' , 'o'}
    
    // char str1[5] = {'H', 'e' , 'l' , 'l' , 'o' };    // str1[] ----> {'H' , 'e' , 'l' , 'l' , 'o'}
    // char str2[5] = {'H', 'e' , 'l' , 'l' , 'o' };    // str2[] ----> {'H' , 'e' , 'l' , 'l' , 'o'}
    
    // char str1[6] = {'H', 'e' , 'l' , 'l' , 'o' };      // str1[] ---> {'H' , 'e' , 'l' , 'l' , 'o' , '\0'};
    // char str2[6] = { 'H' , 'e' , 'l' , 'l' , 'o' };    // str2[] ---> {'H' , 'e' , 'l' , 'l' , 'o' , '\0'};

    // strcmp() compares two null-terminated strings until a null character is encountered in either of the strings.
    // This is the reason that if we try to compare any two not-null-terminated strings using strcmp(), we get that 
    // the two strings are not equal.
    
    if( strcmp(str1 , str2) == 0 )
    {
        printf("str1 and str2 are equal\n");
    }
    else
    {
        printf("str1 and str2 are not equal\n");
    }

    return 0;
}