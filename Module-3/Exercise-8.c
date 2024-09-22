#include <stdio.h>
#include <limits.h>

int main()
{
    int a , b , c;
    printf("Enter the value of a: ");
    scanf("%d" , &a);
    printf("Enter the value of b: ");
    scanf("%d" , &b);
    printf("Enter the value of c: ");
    scanf("%d" , &c);
    int mx = INT_MIN;
    if(a > mx)
    {
        mx = a;
    }
    if(b > mx)
    {
        mx = b;
    }
    if(c > mx)
    {
        mx = c;
    }
    printf("The maximum value among a , b and c is: %d\n" , mx);
    return 0;
}