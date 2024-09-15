/*(Separating Digits in an Integer) Write a program that inputs one five-digit
number, separates the number into its individual digits and displays the digits 
separated from one another by three spaces each. [Hint: Use combinations of integer 
division and the remainder operation.] For example, if the user types in 42139, 
the program should display:   4  2  1  3  9
*/

// Solution.

#include <stdio.h>

int main (void)
{
    printf("Enter the number: ");
    int number = 0;
    scanf("%d", &number);

    // Logical Part
    printf("%d ", number/10000);
    // second digit.
    int num2 = number/1000;
    printf("%d ", num2%10);
    // Third Digit.
    int num3 = number/100;
    printf("%d ", num3%10);
    // Fourth Digit.
    int num4 = number/10;
    printf("%d ", num4%10);
    // Fifth Digit.
    printf("%d", number%10);
}