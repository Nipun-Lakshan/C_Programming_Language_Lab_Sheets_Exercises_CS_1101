// Flowcharts (Worksheet Week 01 - Question 06)

#include <stdio.h>

int main()
{
    // Variable Declaration
    int i; // Loop Index

    // Header String Formatting
    printf("\n====================");
    printf("\nOdd Numbers up to 20");
    printf("\n====================\n\n");

    // Print The Result
    printf("Odd Numbers : [");
    for (i = 0; i < 21; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d", i);
            if (i != 19)
            {
                printf(", ");
            }
            else
            {
                printf("]");
            }
        }
    }
    printf("\n");

    return 0;
}
