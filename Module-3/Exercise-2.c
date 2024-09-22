#include <stdio.h>

int main() 
{
    // Variable declarations
    int a;
    short int b;
    long int c;
    float d;
    double e;
    char f;
    unsigned int g;
    unsigned short int h;
    unsigned long int i;

    // Displaying the sizes of various data types using sizeof
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of short int: %zu bytes\n", sizeof(b));
    printf("Size of long int: %zu bytes\n", sizeof(c));
    printf("Size of float: %zu bytes\n", sizeof(d));
    printf("Size of double: %zu bytes\n", sizeof(e));
    printf("Size of char: %zu bytes\n", sizeof(f));
    printf("Size of unsigned int: %zu bytes\n", sizeof(g));
    printf("Size of unsigned short int: %zu bytes\n", sizeof(h));
    printf("Size of unsigned long int: %zu bytes\n", sizeof(i));

    return 0;
}
