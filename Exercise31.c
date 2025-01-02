// Declaring Variables and Format Specifiers (Supplementary Worksheet Week 01 - Question 26)

#include <stdio.h>

int main()
{
    // Variable Declaration
    short number = 10;
    char letter = 'a';
    float pi = 3.14;
    double value = 1.2345678900;

    // Print Result
    printf("\n");
    printf("Number   : %hd\n", number);
    printf("Letter   : %c\n", letter);
    printf("PI Value : %.2f\n", pi);
    printf("Value    : %.10lf\n", value);
}
