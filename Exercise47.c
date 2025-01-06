// CS 1101 - Functions Worksheet - Question 01 - Part a

#include <stdio.h>
#include <string.h>

void displayUser(void); // Function to Get Name, Email & LinkedIn Link and Print them.

int main()

{
    // Call for the Function
    displayUser();
    return 0;
}

void displayUser(void)
{
    // Variable Declaration
    char data[3][100]; // Store Name, Email Address & LinkedIn Link
    size_t len;        // Store Length of the String

    // Header String Formatting
    printf("\n====================");
    printf("\nDisplay User Details");
    printf("\n====================\n\n");

    // Sub Header Formatting
    printf("==============");
    printf("\nInput The Data");
    printf("\n==============\n\n");

    // Request Data From User
    printf("Enter Your Name     : ");
    fgets(data[0], sizeof(data[0]), stdin);

    len = strlen(data[0]);
    if (len > 0 && data[0][len - 1] == '\n')
    {
        data[0][len - 1] = '\0';
    }

    printf("Enter Your Email    : ");
    fgets(data[1], sizeof(data[1]), stdin);

    len = strlen(data[1]);
    if (len > 0 && data[1][len - 1] == '\n')
    {
        data[1][len - 1] = '\0';
    }
    printf("Enter Your LinkedIn : ");
    fgets(data[2], sizeof(data[2]), stdin);

    len = strlen(data[2]);
    if (len > 0 && data[2][len - 1] == '\n')
    {
        data[2][len - 1] = '\0';
    }

    // Sub Header Formatting
    printf("\n==============");
    printf("\nPrint The Data");
    printf("\n==============\n\n");

    // Print the Output
    printf("Name     : %s\n", data[0]);
    printf("Email    : %s\n", data[1]);
    printf("LinkedIn : %s\n", data[2]);
}