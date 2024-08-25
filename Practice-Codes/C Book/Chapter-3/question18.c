/*(Sales-Commission Calculator) One large chemical company pays its salespeople on a
commission basis. The salespeople receive $200 per week plus 9% of their gross sales 
for that week. For example, a salesperson who sells $5000 worth of chemicals in a week 
receives $200 plus 9% of $5000, or a total of $650. Develop a program that will use 
scanf to input each salesperson’s gross sales for last week and calculate and display 
that salesperson’s earnings. Process one salesperson's figures at a time.
Here is a sample input/output dialog:

Enter sales in dollars (-1 to end): 5000.00
Salary is: $650.00

Enter sales in dollars (-1 to end): 1234.56
Salary is: $311.11

Enter sales in dollars (-1 to end): -1*/

// Solution.

#include <stdio.h>

int main (void)
{
    int sales = 0;
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%d", &sales);

    while (sales != -1)
    {
        int salary = 0; 
        salary = 200 + ((9*sales)/100);
        printf("Salary is: %d\n", salary);

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%d", &sales);
    }
}