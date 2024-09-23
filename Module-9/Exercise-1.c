#include <stdio.h>
// #include <unistd.h>  // For the sleep() function
#include <Windows.h>

// Define a structure to represent the traffic light phases
typedef struct {
    char* stateName;
    int duration; // duration of the phase in seconds
} TrafficLightPhase;

// Function to simulate a traffic light phase
void simulatePhase(TrafficLightPhase phase) {
    printf("%s - %s for %d seconds\n", phase.stateName, phase.stateName, phase.duration);
    // sleep(phase.duration); // Sleep to simulate the time for each phase
    Sleep(phase.duration * 1000);
}

int main() {
    // Define the traffic light phases
    TrafficLightPhase greenPhase = {"Green light", 5};
    TrafficLightPhase yellowPhase = {"Yellow light", 2};
    TrafficLightPhase redPhase = {"Red light", 7};
    
    // Infinite loop to continuously cycle through the phases
    while (1) {
        simulatePhase(greenPhase);
        simulatePhase(yellowPhase);
        simulatePhase(redPhase);
    }

    return 0;
}