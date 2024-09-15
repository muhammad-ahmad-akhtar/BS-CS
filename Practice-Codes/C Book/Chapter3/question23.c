/*(Find the Largest Number) Finding the largest number (i.e., the maximum of a group of numbers) 
is used frequently in computer applications. For example, a program that determines the winner of 
a sales contest would input the number of units sold by each salesperson. The salesperson who sells
the most units wins the contest. Write a pseudocode program and then a program that uses scanf to 
input a series of 10 non-negative numbers and determines and prints the largest of the numbers. Your
program should use three variables:

a) counter—A counter to count to 10 (i.e., to keep track of how many numbers have
   been input and to determine when all 10 numbers have been processed).
b) number—The current number input to the program.
c) largest—The largest number found so far.*/

// Solution.

#include <stdio.h>

int main (void)
{
    int counter = 1;
    int number, largest, larger = 0;

    while ( counter <= 10 )
    {
        printf("Enter the sales of %d employee: ", counter);
        scanf("%d", &number);

        if ( number > largest )
        {
            largest = number;
        }
        if ( number > larger && number < largest )
        {
            larger = number;
        }
        counter ++;
    }
    printf("The largest saless done are %d.\n", largest);
    printf("The second largest sales done are %d.\n", larger);
}