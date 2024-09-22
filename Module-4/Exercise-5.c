#include <stdio.h>

int main()
{
    int distance;
    printf("Enter a random distance value within the range of 0 to 100 meters: ");
    scanf("%d" , &distance);
    printf("Simulated distance: %d meters\n" , distance);
    if(distance < 40)
    {
        printf("Object is close\n");
    }
    else if(distance >= 40 && distance <= 60)
    {
        printf("Object is at medium distance\n");
    }
    else
    {
        printf("Object is far away\n");
    }
    return 0;
}