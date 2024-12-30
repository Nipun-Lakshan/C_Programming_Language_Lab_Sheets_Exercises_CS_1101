// Variable in C (Supplementary Worksheet Week 01 - Question 23)

#include <stdio.h>

int main()
{
    // Variable Declaration
    float temperature_in_celsius;
    float temperature_in_fahrenheit;
    char degree_symbol = 248;

    // Request Input From User
    printf("\nEnter temperature in %cC : ", degree_symbol);
    scanf("%f", &temperature_in_celsius);

    // Convert the Temperature from Celsius to Fahrenheit
    temperature_in_fahrenheit = (((9 * temperature_in_celsius) / 5) + 32);

    // Print the Values
    printf("%.2f%cC = %.2f%cF\n", temperature_in_celsius, degree_symbol, temperature_in_fahrenheit, degree_symbol);

    return 0;
}
