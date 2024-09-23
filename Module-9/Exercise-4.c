#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Time
{
    char hours[3];
    char minutes[3];
    char seconds[3];
};

struct Time readCurrentTime(char* time)
{
    char hr[3] , min[3] , sec[3];

    memset(hr , '\0' , sizeof(hr));
    memset(min , '\0' , sizeof(min));
    memset(sec , '\0' , sizeof(sec));
    
    hr[0] = *(time + 0);
    hr[1] = *(time + 1);
    min[0] = *(time + 3);
    min[1] = *(time + 4);
    sec[0] = *(time + 6);
    sec[1] = *(time + 7);

    struct Time currTime;

    strcpy(currTime.hours , hr);
    strcpy(currTime.minutes , min);
    strcpy(currTime.seconds , sec);

    return currTime;
    
}

struct Time setAlarmTime(char* alarm)
{
    char hr[3] , min[3] , sec[3];

    memset(hr , '\0' , sizeof(hr));
    memset(min , '\0' , sizeof(min));
    memset(sec , '\0' , sizeof(sec));
    
    hr[0] = *(alarm + 0);
    hr[1] = *(alarm + 1);
    min[0] = *(alarm + 3);
    min[1] = *(alarm + 4);
    sec[0] = *(alarm + 6);
    sec[1] = *(alarm + 7);

    struct Time alarmTime;

    strcpy(alarmTime.hours , hr);
    strcpy(alarmTime.minutes , min);
    strcpy(alarmTime.seconds , sec);

    return alarmTime;
}

void displayCurrentTime(struct Time currentTime)
{
    printf("Current Time: %s:%s:%s\n" , currentTime.hours , currentTime.minutes , currentTime.seconds);
}

void displayAlarmTime(struct Time alarmTime)
{
    printf("Alarm set for: %s:%s:%s\n" , alarmTime.hours , alarmTime.minutes , alarmTime.seconds);
}

int main()
{
    printf("%c" , '\n');

    struct Time currentTime;
    struct Time alarmTime;

    char time[9];

    printf("Enter the current time (hh:mm:ss): ");
    scanf("%s" , time);
    getchar();

    printf("%c", '\n');

    char alarm[9];

    printf("Enter alarm time (hh:mm:ss): ");
    scanf("%s" , alarm);
    getchar();

    printf("%c" , '\n');

    currentTime = readCurrentTime(time);
    alarmTime = setAlarmTime(alarm);

    displayCurrentTime(currentTime);

    printf("%c" , '\n');

    displayAlarmTime(alarmTime);

    printf("%c" , '\n');

    return 0;
}