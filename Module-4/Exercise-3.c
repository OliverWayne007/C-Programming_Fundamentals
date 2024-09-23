#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TEMP 100
#define THRESHOLD_TEMP 30

int main() 
{
    int temperature;

    // Initialize random number generator
    srand(time(0));

    // Generate a random temperature value between 0 and MAX_TEMP
    temperature = rand() % (MAX_TEMP + 1);

    // Display the simulated temperature
    printf("Simulated Temperature: %d degrees Celsius\n", temperature);

    // Conditional check for temperature threshold
    if (temperature > THRESHOLD_TEMP) 
    {
        printf("Temperature exceeds threshold. Turn on the fan.\n");
    } 
    else 
    {
        printf("Temperature is below the threshold. Fan remains off.\n");
    }

    return 0;
}
