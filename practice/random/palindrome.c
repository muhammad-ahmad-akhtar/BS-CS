#include <stdio.h>

int main(void)
{
    // Getting input from the user.
    printf("Number: ");
    int number = 0;
    scanf("%i", &number);

    // Implementing the logic.
    int num1 = 0;
    num1 = ( number / 10000 ) % 10;

    int num2 = 0;
    num2 = ( number / 1000 ) % 10;

    //printf("num1: %i\nnum2: %i\n", num1, num2);

    int num3 = 0;
    num3 = ( number / 10 ) % 10;

    int num4 = 0;
    num4 = ( number/ 1 ) % 10;

    //printf("num3: %i\nnum4: %i", num3, num4);

    // Printing the results.
    if ( num1 == num4 && num2 == num3 )
    {
        printf("Palindrome Detected.\n");
    }
    else
    {
        printf("No Palidrome Detected.\n");
    }
}