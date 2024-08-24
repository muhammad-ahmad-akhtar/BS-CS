/**/

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