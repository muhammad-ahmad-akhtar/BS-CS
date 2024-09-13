#include <stdio.h>

int main (void)
{
    // Prompting user for input.
    int cents = 0;
    do
    {
        printf("Change owed: ");
        scanf("%i", &cents);
    } while ( cents < 1 );
    
    // Calculating no. of quarters.
    int quarters = 0;
    while ( cents >= 25 )
    {
        cents -= 25;
        quarters++;
    }

    // Calculating no. of dimes.
    int dimes = 0;
    while ( cents >= 10 )
    {
        cents -= 10;
        dimes++;
    }

    // Calculating no. of nickels.
    int nickels = 0;
    while ( cents >= 5 )
    {
        cents -= 5;
        nickels++;
    }

    // Calculating no. of Pennies.
    int pennies = 0;
    while ( cents >= 1 )
    {
        cents -= 1;
        pennies++;
    }

    // Calculating the no. of coins to owed.
    int sum = quarters + nickels + dimes + pennies;

    //  Printing the sum of no. of coins.
    printf("Total no. of Coins are %d\n", sum);
}