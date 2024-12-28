// Flowcharts (Supplementary Worksheet Week 01 - Question 05)

#include <stdio.h>

int main()

{
    // Variable Declaration
    long long end_point;
    long long start_point;
    long long i;
    long long count = 0;

    // Header String Formatting
    printf("\n===========");
    printf("\nOdd Numbers");
    printf("\n===========\n\n");

    // Prompt User for Input
    printf("Enter the start point (Integer Only) : ");
    scanf("%lld", &start_point);
    printf("Enter the end point   (Integer Only) : ");
    scanf("%lld", &end_point);

    // Print all Odd numbers within the range
    if (end_point - start_point == 0)
    {
        printf("\nNo Elements Within the Given Range!\n");
    }
    else
    {
        printf("\n[");
    }

    for (i = start_point; i <= end_point; i++)
    {
        if (i % 2 != 0)
        {
            ++count;
            printf("%lld", i);
            if (count % 10 != 0 && (i == end_point || i + 1 == end_point))
            {
                printf("]\n");
            }
            else if (count % 10 != 0 && i != end_point)
            {
                printf(", ");
            }
            else if (count % 10 == 0 && (i == end_point || i + 1 == end_point))
            {
                printf("]\n");
            }
            else if (count % 10 == 0 && i != end_point)
            {
                printf("]\n[");
            }
        }
    }
    return 0;
}