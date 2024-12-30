// Flowcharts (Worksheet Week 01 - Question 08)

#include <stdio.h>

int main()
{
    // Variable Declaration
    long long i; // Loop Index
    long long end_point;
    long long sum = 0;

    // Header String Formatting
    printf("\n==================================");
    printf("\nSum of Even Numbers Within a Range");
    printf("\n==================================\n\n");

    // Request the End Point of the Range
    while (1)
    {
        printf("Enter the end point : ");
        scanf("%lld", &end_point);
        if (end_point < 1)
        {
            printf("Invalid input! Please enter a value greater than 0.\n\n");
        }
        else
        {
            break;
        }
    }

    // Calculate the Sum of Even Numbers
    for (i = 0; i <= end_point; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of all even numbers from 0 to %lld : %lld\n", end_point, sum);

    return 0;
}
