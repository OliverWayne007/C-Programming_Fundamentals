#include <stdio.h>

int main()
{
    int x , y;
    printf("Enter the value of x: ");
    scanf("%d" , &x);
    printf("Enter the value of y: ");
    scanf("%d" , &y);
    printf("Before swapping: \n");
    printf("The value of x is: %d\n" , x);
    printf("The value of y is: %d\n" , y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After swapping: \n");
    printf("The value of x is: %d\n" , x);
    printf("The value of y is: %d\n" , y);
    return 0;
}