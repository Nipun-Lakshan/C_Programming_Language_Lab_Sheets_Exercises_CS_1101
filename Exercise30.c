// Variables in C (Supplementary Worksheet Week 01 - Question 25)

#include <stdio.h>

int main()
{
    // Variable Declarations
    float length;
    float width;
    float area;

    // Request Inputs From User and Validate it
    while (1)
    {
        printf("\nThe Length of The Rectangle : ");
        scanf("%f", &length);
        if (length > 0)
        {
            break;
        }
        else
        {
            printf("Invalid Input! Please enter a value greater than 0.\n");
        }
    }

    while (1)
    {
        printf("The Width of The Rectangle  : ");
        scanf("%f", &width);
        if (width > 0)
        {
            break;
        }
        else
        {
            printf("Invalid Input! Please enter a value greater than 0.\n\n");
        }
    }

    // Calculate the Area and Print it
    area = length * width;
    printf("\nThe Area of The Rectangle   : %.2f\n", area);
    return 0;
}
