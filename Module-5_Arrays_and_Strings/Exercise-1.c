#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

void getfilteredData(int arr[] , int n , int threshhold)
{
    printf("Filtered sensor data: \n");
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] <= threshhold)
        {
            printf("%d " , arr[i]);
        }
    }
    printf("%c" , '\n');
    return;
}

int main()
{
    int sensorData[10];
    printf("Enter the sensor readings: \n");
    for(int i = 0 ; i < 10 ; i++)
    {
        int input;
        scanf("%d" , &input);
        sensorData[i] = input;
        getchar();
    }
    printf("Sensor data: \n");
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d " , sensorData[i]);
    }

    printf("%c" , '\n');

    float average;
    int threshhold = 50;
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    float sum = 0;

    for(int i = 0 ; i < 10 ; i++)
    {
        sum += sensorData[i];
        if(maximum < sensorData[i])
        {
            maximum = sensorData[i];
        }
        if(minimum > sensorData[i])
        {
            minimum = sensorData[i];
        }
    }

    average = (float) sum / 10;

    printf("Average sensor reading: %f\n" , average);
    printf("Minimum sensor reading: %d\n" , minimum);
    printf("Maximum sensor reading: %d\n" , maximum);
    getfilteredData(sensorData , 10 , threshhold);

    return 0;
}