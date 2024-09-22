#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    getchar();
    int prevtoprev = 0;
    int prev = 1;
    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            printf("%d " , 0);
            continue;
        }
        if(i == 1)
        {
            printf("%d " , 1);
            continue;
        }
        int curr = prevtoprev - prev;
        printf("%d " , curr);
        prevtoprev = prev;
        prev = curr;
    }
    return 0;
}