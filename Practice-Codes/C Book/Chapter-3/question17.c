/*(Credit-Limit Calculator) Develop a C program that will determine whether adepartment-
store customer has exceeded the credit limit on a charge account. For each customer, the 
following facts are available:

  a) Account number
  b) Balance at the beginning of the month
  c) Total of all items charged by this customer this month
  d) Total of all credits applied to this customer's account this month
  e) Allowed credit limit

The program should use scanf to input each fact, calculate the new balance (=beginning 
balance + charges – credits), and determine whether the new balance exceeds the customer's
credit limit. For those customers whose credit limit is exceeded, themprogram should
display the customer's account number, credit limit, new balance and the message 
“Credit limit exceeded.” Here is a sample input/output dialog:

Enter account number (-1 to end): 100
Enter beginning balance: 5394.78
Enter total charges: 1000.00
Enter total credits: 500.00
Enter credit limit: 5500.00
Account: 100
Credit limit: 5500.00
Balance: 5894.78
Credit Limit Exceeded.

Enter account number (-1 to end): 200
Enter beginning balance: 1000.00
Enter total charges: 123.45
Enter total credits: 321.00
Enter credit limit: 1500.00

Enter account number (-1 to end): -1*/

// Solution.

#include <stdio.h>

int main (void)
{
    int acc_num = 0;

    while (acc_num != -1)
    {
        int balance, charge, credit, limit, new_balance = 0;

        printf("Enter the account number (-1 to end): ");
        scanf("%d", &acc_num);

        if (acc_num == -1)
        {
            break;
        }

        printf("Enter begning balance: ");
        scanf("%d", &balance);

        printf("Enter total Charges: ");
        scanf("%d", &charge);

        printf("Enter total credits: ");
        scanf("%d", &credit);

        printf("Enter Credit limit: ");
        scanf("%d", &limit);

        printf("Account:       %d\n", acc_num);
        printf("Credit limit:  %d\n", limit); 
        new_balance = balance + charge - credit;
        printf("Balance:       %d\n", new_balance);
        
        if ( new_balance >= limit)
        {
            printf("Credit Limit Exceed.\n");
        }
    }

}