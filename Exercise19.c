// Flowcharts (Supplementary Worksheet Week 01 - Question 10)

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    // Variable Declaration
    double area;
    double circumference;
    double radius;
    int choice; // 0 -> Area /  1 -> Circumference
    double pi = M_PI;

    // Request Radius From User and Validate it
    while (1)
    {
        printf("\nEnter the radius of the circle: ");
        scanf("%lf", &radius);
        if (radius < 1)
        {
            printf("Invalid Input! Please enter a positive value which is greater than 0.\n");
        }
        else
        {
            break;
        }
    }

    // Request Choice for Area or Circumference
    while (1)
    {
        printf("Calculate area or circumference? (Area - 0 / Circumference - 1): ");
        scanf("%d", &choice);
        if (choice == 0 || choice == 1)
        {
            break;
        }
        else
        {
            printf("Invalid Input! Please enter 0 or 1.\n\n");
        }
    }

    printf("\n");

    // Calculate Area or Circumference
    if (choice == 0)
    {
        area = (pi * radius * radius);
        printf("Area of the Circle: %.2f\n", area);
    }
    else
    {
        circumference = (2 * pi * radius);
        printf("Circumference of the Circle: %.2f\n", circumference);
    }

    return 0;
}
