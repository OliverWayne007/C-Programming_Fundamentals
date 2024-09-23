#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

struct DataEntry
{
    int timestamp;
    int measuredValue;
    int sensorId;
};

void addNewDataEntry(struct DataEntry** pointer_to_datalog , int* n)
{
    *n += 1;
    
    *(pointer_to_datalog) = (struct DataEntry*) realloc( *(pointer_to_datalog) , (*n) * sizeof(struct DataEntry) );
    
    struct DataEntry dataEntry;
    printf("Enter the sensorId: ");
    scanf("%d" , &dataEntry.sensorId);
    getchar();
    printf("Enter timestamp (in seconds): ");
    scanf("%d" , &dataEntry.timestamp);
    getchar();
    printf("Enter the measured value: ");
    scanf("%d" , &dataEntry.measuredValue);
    getchar();
    (*pointer_to_datalog)[(*n) - 1] = dataEntry;
    printf("New data entry added successfully !\n");
    
    printf("%c" , '\n');
    return;
}

void retrieveDataByTimestamp(struct DataEntry* datalog , int* n)
{
    int timestamp;
    printf("Enter timestamp: ");
    scanf("%d" , &timestamp);
    
    for(int i = 0 ; i < *n ; i++)
    {
        if(datalog[i].timestamp == timestamp)
        {
            printf("Required Data Entry: \n");
            printf("sensorId: %d\n" , datalog[i].sensorId);
            printf("timestamp: %d\n" , datalog[i].timestamp);
            printf("measuredValue: %d\n" , datalog[i].measuredValue);
            printf("%c" , '\n');
            return;
        }
    }
    printf("No data entries found for timestamp %d\n" , timestamp);
    
    printf("%c" , '\n');
    
    return;
}


void displaySummaryStatistics(struct DataEntry* datalog , int* n)
{
    float average;
    int minimum = INT_MAX , maximum = INT_MIN , sum = 0;
    
    for(int i = 0 ; i < *n ; i++)
    {
        sum += datalog[i].measuredValue;
        if(minimum > datalog[i].measuredValue)
        {
            minimum = datalog[i].measuredValue;
        }
        if(maximum < datalog[i].measuredValue)
        {
            maximum = datalog[i].measuredValue;
        }
    }
    
    average = (float)(sum)/(*n);
    
    printf("Statistics: \n");
    printf("Average: %.2f\n" , average);
    printf("Minimum: %d\n" , minimum);
    printf("Maximum: %d\n" , maximum);
    
    printf("%c" , '\n');
    
    return;
}


int main()
{
    int n;
    printf("Enter the number of data entries: ");
    scanf("%d" , &n);
    getchar();
    
    printf("%c" , '\n');
    
    struct DataEntry* datalog = (struct DataEntry*) malloc ( n * sizeof(struct DataEntry) );
    
    for(int i = 0 ; i < n ; i++)
    {
        struct DataEntry dataEntry;
        printf("Enter the sensorId: ");
        scanf("%d" , &dataEntry.sensorId);
        getchar();
        printf("Enter timestamp (in seconds): ");
        scanf("%d" , &dataEntry.timestamp);
        getchar();
        printf("Enter the measured value: ");
        scanf("%d" , &dataEntry.measuredValue);
        getchar();
        *(datalog + i) = dataEntry;
        printf("%c" , '\n');
    }
    
    printf("%c" , '\n');
    
    while(true)
    {
        printf("Data Logging system\n");
        printf("1. Add new Data Entry\n");
        printf("2. Retrieve data by timestamp\n");
        printf("3. Display Summary Statistics\n");
        printf("4. Exit\n");
        
        printf("%c" , '\n');
        
        int choice;
        printf("Enter your choice: ");
        scanf("%d" , &choice);
        getchar();
        
        printf("%c" , '\n');
        
        if(choice == 1)
        {
            addNewDataEntry(&datalog , &n);
        }
        else if(choice == 2)
        {
            retrieveDataByTimestamp(datalog , &n);
        }
        else if(choice == 3)
        {
            displaySummaryStatistics(datalog , &n);
        }
        else if(choice == 4)
        {
            printf("Exiting the data logging system....\n");
            break;
        }
        else
        {
            printf("Please enter a valid choice !\n");
        }
    }
    
    free(datalog);
    return 0;
}