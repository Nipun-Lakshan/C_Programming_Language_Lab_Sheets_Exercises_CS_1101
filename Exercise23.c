// Flowcharts (Worksheet Week 01 - Question 12)

#include <stdio.h>
#include <stdbool.h>

bool is_this_number_prime(int i)
{
    // Variable Declaration
    int j;

    // Logic to find Prime Numbers
    if (i == 2)
    {
        return true;
    }
    else
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                return false;
            }
        }
    }
}

int main()
{
    // Variable Declaration
    int i = 2;
    int count = 0;
    bool isPrime = false;

    // Header String Formatting
    printf("\n=======================");
    printf("\nFirst 100 Prime Numbers");
    printf("\n=======================\n\n");

    // Loop for Calculate Prime Numbers and Print it
    printf("[");
    while (count < 100)
    {
        isPrime = is_this_number_prime(i);
        if (isPrime)
        {
            count++;
            if (i < 10)
            {
                printf(" 0%d", i);
            }
            else if (i < 100)
            {
                printf(" %d", i);
            }
            else
            {
                printf("%d", i);
            }
            if (count % 10 == 0 && count != 100)
            {
                printf("]\n[");
            }
            else if (count % 10 == 0 && count == 100)
            {
                printf("]\n");
            }
            else
            {
                printf(", ");
            }
        }
        i++;
    }

    return 0;
}
