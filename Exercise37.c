// Declaring Variables and Format Specifiers (Supplementary Worksheet Week 01 - Question 31 - Part 02)

#include <stdio.h>

int main()
{
    // Header String Formatting
    printf("\n==========================");
    printf("\nPerimeter of The Rectangle");
    printf("\n==========================\n\n");

    // Variable Declaration
    double length = 7.342;
    double width = 5.345;
    double perimeter;

    // Calculate the perimeter
    perimeter = 2 * (length + width);

    // Print the Result
    printf("The perimeter of the rectangle is %lf cm^2\n", perimeter);

    return 0;
}