// Variable in C (Supplementary Worksheet Week 01 - Question 22)

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    // Variable Declaration
    float radius; // Declare a Variable
    float area;
    float pi = M_PI;

    // Request Input From User
    printf("\n");
    while (1)
    {
        printf("Enter the radius of the circle in cm : ");
        scanf("%f", &radius); // Assign a Value
        if (radius < 1)
        {
            printf("Invalid Input! Please enter a value greater than 0.\n\n");
        }
        else
        {
            break;
        }
    }

    // Calculate Area & Print it
    area = (pi * radius * radius);
    printf("The Area of The Circle : %.2f cm^2\n", area); // Display the Area
    return 0;
}
