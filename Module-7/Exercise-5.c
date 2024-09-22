#include <stdio.h>

int calculateTotalPopulation(int population[] , int n)
{
    int totalPopulation = 0;
    for(int i = 0 ; i < n ; i++)
    {
        totalPopulation += population[i];
    }
    return totalPopulation;
}

int main()
{
    int population[10];
    printf("Enter the population of birds over the years: \n");
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d" , &population[i]);
    }
    // getchar();
    int totalPopulation = calculateTotalPopulation(population , 10);
    printf("The total population of birds over a decade is: %d\n" , totalPopulation);
    return 0;
}