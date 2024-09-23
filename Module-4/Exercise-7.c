#include <stdio.h>

#define TOTAL_FLOORS 5

void displayMenu() 
{
    printf("Please select a floor:\n");
    for (int i = 1; i <= TOTAL_FLOORS; i++) 
    {
        printf("%d. Floor %d\n", i, i);
    }
    printf("%d. Exit\n", TOTAL_FLOORS + 1);
    printf("Enter your choice: ");
}

int main() 
{
    int currentFloor = 1; // Elevator starts at Floor 1
    int selectedFloor;

    while (1) {
        displayMenu();
        scanf("%d", &selectedFloor);

        if (selectedFloor == TOTAL_FLOORS + 1) 
        {
            printf("Exiting...\n");
            break;
        }

        if (selectedFloor < 1 || selectedFloor > TOTAL_FLOORS) 
        {
            printf("Invalid choice. Please select a valid floor.\n");
            continue;
        }

        if (selectedFloor == currentFloor) 
        {
            printf("Elevator is already at Floor %d.\n", currentFloor);
        } 
        else if (selectedFloor > currentFloor)
        {
            printf("Elevator moving up to Floor %d...\n", selectedFloor);
            currentFloor = selectedFloor;
        } 
        else 
        {
            printf("Elevator moving down to Floor %d...\n", selectedFloor);
            currentFloor = selectedFloor;
        }
    }

    return 0;
}