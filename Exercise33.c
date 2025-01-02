// Declaring Variables and Format Specifiers (Supplementary Worksheet Week 01 - Question 28)

#include <stdio.h>

int main()
{
    // Variable Declaration
    int a = 10;
    int b = 15;

    // Print Results
    printf("\n%d + %d = %d", a, b, (a + b));            // 25
    printf("\n%d - %d = %d", a, b, (a - b));            // -5
    printf("\n%d * %d = %d", a, b, (a * b));            // 150
    printf("\n%d / %d = %.2f\n", a, b, (a / (float)b)); // 0.667
    return 0;
}
