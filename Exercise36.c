// Declaring Variables and Format Specifiers (Supplementary Worksheet Week 01 - Question 31 - Part 01)

#include <stdio.h>

int main()
{
    // Header String Formatting
    printf("\n=====================");
    printf("\nArea of The Rectangle");
    printf("\n=====================\n\n");

    // Variable Declaration
    double length = 7.342;
    double width = 5.345;
    double area;

    // Calculate the area
    area = length * width;

    // Print the Result
    printf("The area of the rectangle is %lf cm^2\n", area);

    return 0;
}
