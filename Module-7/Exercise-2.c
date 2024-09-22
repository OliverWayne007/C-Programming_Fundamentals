#include <stdio.h>

int main()
{
    int x , y;
    printf("Enter the value of x: ");
    scanf("%d" , &x);

    getchar();

    printf("Enter the value of y: ");
    scanf("%d" , &y);

    printf("%c" , '\n');

    printf("The value of x before swapping: %d\n" , x);
    printf("The value of y before swapping: %d\n" , y);

    printf("%c" , '\n');

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("The value of x after swapping: %d\n" , x);
    printf("The value of y after swapping: %d\n" , y);

    return 0;
}