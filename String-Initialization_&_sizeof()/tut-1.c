#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // In case of a character array, the compiler by default does not insert '\0' at the end.
    char str1[] = {'a' , 'r' , 'p' , 'i' , 't'};
    
    // In case of string literal, the compiler by default inserts a '\0' at the end of the string.
    char str2[] = "arpit";
    
    // The compiler internally converts str2 to {'a' , 'r' , 'p' , 'i' , 't' , '\0'}
    
    // This is the reason that str1 and str2 are not equal since the number of characters
    // in str1 is 5 and the number of characters in str2 is 6 as str1 does not have '\0'
    // at the end whereas str2 has a '\0' at the end.

    // Note that the sizeof() function returns a value of type size_t which is a 64-bit unsigned integer

    // %zu Format Specifier
    // The %zu format specifier in C is used to print the value of a size_t type variable.
    // The size_t type is an unsigned integer type that is used to represent the size of objects in memory.
    
    printf("length(str1): %lu\n" , sizeof(str1)/sizeof(str1[0]) );
    printf("length(str2): %lu\n" , sizeof(str2)/sizeof(str2[0]) );
    
    if(strcmp(str1 , str2) == 0)
    {
        printf("str1 and str2 are equal.\n");
    }
    else
    {
        printf("str1 and str2 are not equal.\n");
    }
    
    return 0;
}