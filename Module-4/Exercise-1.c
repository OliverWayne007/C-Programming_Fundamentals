#include <stdio.h>

#include <Windows.h>  // For windows

// #include<unistd.h>  // For Unix

int main()
{
    int led_state = 0;

    for(int i = 1 ; i <= 10 ; i++)
    {
        if(led_state == 1)
        {
            printf("LED is ON\n");
        }
        else
        {
            printf("LED is OFF\n");
        }
        led_state = i % 2;
        Sleep(2000);
        // usleep(2000);
    }

    return 0;
}