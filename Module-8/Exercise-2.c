#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("%c" , '\n');

    int a = 20;
    const int b = 50;

    printf("The value of integer variable a is: %d\n" , a);
    printf("The value of constant integer variable b is: %d\n" , b);

    printf("%c" , '\n');

    // Declaring a normal pointer ptr and storing the address of a constant integer in it.
    int* ptr = &b;
    printf("The address stored in ptr is: %p\n" , ptr);
    printf("The value stored at the address stored in the ptr is: %d\n" , *ptr);

    printf("%c" , '\n');

    // Modifying the value of a constant integer using the normal pointer ptr
    *ptr = 100;
    printf("The address stored in ptr is: %p\n" , ptr);

    // Printing the value of constant integer b after modifying it through normal pointer ptr
    printf("The value of constant integer variable b after modifying it through ptr is: %d\n" , b);

    printf("%c" , '\n');

    // Now, changing the address stored in ptr to the address of non-constant integer variable a;
    ptr = &a;
    printf("The address stored in ptr is: %p\n" , ptr);
    printf("The value stored at the address stored in the ptr is: %d\n" , *ptr);

    printf("%c" , '\n');

    // Declaring and initializing a pointer to constant
    // Note: Both the following syntax can be used for declaration and initialization. Both do the same thing.
    const int * pointer_to_constant = &a;
    // int const * pointer_to_constant = &a;

    printf("The address stored in pointer_to_constant is: %p\n" , pointer_to_constant);
    printf("The value stored at the address stored in the pointer_to_constant is: %d\n" , *pointer_to_constant);

    // Trying to change the value stored at the address stored in pointer_to_constant
    // *(pointer_to_constant) = 100;  // error: assignment of read-only location '*pointer_to_constant

    // Changing the address stored in the pointer_to_constant to the address of constant integer variable b
    pointer_to_constant = &b;
    printf("The address stored in pointer_to_constant is: %p\n" , pointer_to_constant);
    printf("The value stored at the address stored in the pointer_to_constant is: %d\n" , *pointer_to_constant);

    printf("%c" , '\n');

    // Declaring and Initializing a constant pointer
    // The address stored in a constant pointer cannot be modified
    // Storing the address of integer variable a in the constant_pointer
    int * const constant_pointer = &a;
    printf("The address stored in the constant_pointer is: %p\n" , constant_pointer);
    printf("The value stored at the address stored in the constant_pointer is: %d\n" , *constant_pointer);
    
    // Trying to change the address stored in the constant_pointer to the address of b
    // constant_pointer = &b; // error: assignment of read-only variable 'constant_pointer'

    // Changing the value stored at the address stored in the constant_pointer
    *constant_pointer = 500;
    printf("The address stored in constant_pointer is: %p\n" , constant_pointer);
    printf("The value of integer variable a after modifying it through constant_pointer is: %d\n" , a);

    printf("%c" , '\n');
    return 0;
}