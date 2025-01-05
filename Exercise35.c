// Declaring Variables and Format Specifiers (Supplementary Worksheet Week 01 - Question 30)

#include <stdio.h>

int main()
{
    // Header String Formatting
    printf("\n================================");
    printf("\nSwap The Values of Two Variables");
    printf("\n================================\n\n");

    // Variable Declaration
    double a;
    double b;
    double temp; // Temporary variable to swap the values

    // Request Data From User
    printf("Enter a value for a : ");
    scanf("%lf", &a);
    printf("Enter a value for b : ");
    scanf("%lf", &b);
    printf("\n");

    // Method 01 :- Swap the values of two variables
    a = a + b;
    b = a - b;
    a = a - b;

    // Print the result after Method 01.
    printf("Current Value of a  : %.lf\n", a);
    printf("Current Value of b  : %.lf\n", b);
    printf("\n");

    // Method 02 :- Swap the Values of Two Variables
    temp = a;
    a = b;
    b = temp;

    // Print the result after Method 02.
    printf("Current Value of a  : %.lf\n", a);
    printf("Current Value of b  : %.lf\n", b);

    return 0;
}