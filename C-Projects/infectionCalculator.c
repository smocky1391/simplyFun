#include <stdio.h>

/*
 * This is a fun little input/output sample program that
 * simulates the amount of time it would take for a specific
 * population of any given size to
 */

int main() {

	// User input variables
	int initialInfected;
	int populationSize;
	int infectionRate;

	// Other useful variables
	int totalInfectionTime;
    int i;

	// Population Size
	printf("Enter the size of the total population: \n");
	scanf("%d", populationSize);

	// Initial Infected Count
	printf("Enter the number of initial infected: \n");
	scanf("%d", initialInfected);

	// Infection Rate
	printf("Enter the infection rate (Example: 0.06): \n");
	scanf("%d", infectionRate);

	// Infection rate calculation
	totalInfectionTime = initialInfected * infectionRate;

	// Calculated values
	printf("The total infection time is: %d", totalInfectionTime);
	printf("\n");

	return 0;
}