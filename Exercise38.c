// Declaring Variables and Format Specifiers (Supplementary Worksheet Week 01 - Question 31 - Part 03)

#include <stdio.h>

int main()
{
    // Header String Formatting
    printf("\n=================================");
    printf("\nArea & Perimeter of The Rectangle");
    printf("\n=================================\n\n");

    // Variable Declaration
    double length = 7.342;
    double width = 5.345;
    double perimeter;
    double area;

    // Calculate the area
    area = length * width;

    // Print the Result
    printf("The area of the rectangle is %.3lf cm^2\n", area);

    // Calculate the area
    perimeter = 2 * (length + width);

    // Print the Result
    printf("\nThe perimeter of the rectangle is %.3lf cm^2\n", perimeter);

    return 0;
}