/*(Interest Calculator) The simple interest on a loan is calculated by the formula
interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate, so it divides by
365 (days per year). Develop a program that uses scanf to input principal, rate
and days for several loans, and will calculate and display the simple interest for each
loan, using the preceding formula. Here is a sample input/output dialog:

Enter loan principal (-1 to end): 1000.00
Enter interest rate: .1
Enter term of the loan in days: 365
The interest charge is $100.00

Enter loan principal (-1 to end): 1000.00
Enter interest rate: .08375
Enter term of the loan in days: 224
The interest charge is $51.40

Enter loan principal (-1 to end): -1 */

// Solution.

#include <stdio.h>

int main (void)
{
    int principal, rate, days = 0;
    printf("Enter loan principal (-1 to end): ");
    scanf("%d", &principal);

    while ( principal != -1)
    {
        printf("Enter interest rate: ");
        scanf("%d", &rate);

        printf("Enter term of loan in days: ");
        scanf("%d", &days);

        double interest = (double) principal * rate * days/365;
        printf("The interest charge is $%.4f\n", interest);

        printf("Enter loan principal (-1 to end): ");
        scanf("%d", &principal);
    }
}