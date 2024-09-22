#include<stdio.h>

int main()
{
    float radius;
    printf("Enter the value of radius: ");
    scanf("%f" , &radius);
    float area = 3.14 * radius * radius;
    printf("The area of the circle is: %f\n" , area);
    return 0;
}