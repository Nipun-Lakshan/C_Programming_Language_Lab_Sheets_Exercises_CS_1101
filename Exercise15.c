// Flowcharts (Supplementary Worksheet Week 01 - Question 06)

#include <stdio.h>

int main()

{
    // Variable Declaration
    int sum;
    int i;

    // Header String Formatting
    printf("\n=============================");
    printf("\nSum of Even Numbers (0 - 100)");
    printf("\n=============================\n\n");

    // Calculate the Sum
    for (i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of all even numbers from 0 to 100 : %d\n", sum);

    return 0;
}