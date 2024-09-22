#include <stdio.h>

void print_data(void** ptr_array , int types[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(types[i] == 0)
        {
            int a;
            printf("Enter an integer: ");
            scanf("%d" , &a);
            getchar();
            int* ptr = &a;
            *(ptr_array + i) = ptr;
            printf("Value at index %d (int): %d\n" , i , *( (int*) *(ptr_array + i) ) );
        }
        else if(types[i] == 1)
        {
            float b;
            printf("Enter a floating-point number: ");
            scanf("%f" , &b);
            getchar();
            float* ptr = &b;
            *(ptr_array + i) = ptr;
            printf("Value at index %d (float): %.2f\n" , i , *( (float*) *(ptr_array + i) ) );
        }
        else
        {
            char ch;
            printf("Enter an character: ");
            scanf("%c" , &ch);
            getchar();
            char* ptr = &ch;
            *(ptr_array + i) = ptr;
            printf("Value at index %d (char): %c\n" , i , *( (char*) *(ptr_array + i) ) );
        }
    }
    return;
}

int main()
{
    void* arr[3];
    int types[3] = {2 , 0 , 1};
    print_data(arr , types , 3);
    return 0;
}