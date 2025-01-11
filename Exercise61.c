// CS 1101 - Functions Worksheet - Question 05

#include <stdio.h>

// Function Declarations
void decimalToBinary(int num);
void decimalToHexadecimal(int num);

// Main Function
int main()
{
    // Variable Declaration
    int num;

    // Header String Formatting
    printf("\n=========================================");
    printf("\nConvert Decimal to Binary and Hexadecimal");
    printf("\n=========================================\n\n");

    // Input a Decimal Number
    printf("Enter a Decimal Number : ");
    scanf("%d", &num);

    // Convert and Display the number in binary and hexadecimal
    decimalToBinary(num);
    decimalToHexadecimal(num);

    return 0;
}

void decimalToBinary(int n)
{
    printf("Binary Number\t       : ");
    for (int i = 31; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

void decimalToHexadecimal(int n)
{
    printf("Hexadecimal Number     : %X\n", n);
}
