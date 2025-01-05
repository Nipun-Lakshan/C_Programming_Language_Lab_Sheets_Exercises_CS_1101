// Questions on if, else if, else and nested ifs (Supplementary Worksheet Week 01 - Question 33)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Generate Random Value for Initial State (0 = Unoccupied, 1 = Occupied)
    srand(time(NULL)); // Take Current Time in Seconds as the Seed

    // Variable Declaration
    int spotStatus = ((rand()) % 2);

    // Header String Formatting
    printf("\n===================");
    printf("\nVehicle Spot Status");
    printf("\n===================\n\n");

    // Print Current Spot Status
    printf("The parking spot is currently %s.\n", (spotStatus == 0) ? "unoccupied" : "occupied");

    // Check if the spot is unoccupied
    if (spotStatus == 0)
    {
        printf("The spot is unoccupied. Marking it as occupied now.\n");
        spotStatus = 1; // Mark the spot as occupied
    }

    // Print Updated Spot Status
    printf("The parking spot is now %s.\n", (spotStatus == 0) ? "unoccupied" : "occupied");

    return 0;
}
