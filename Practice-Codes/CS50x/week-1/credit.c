#include <stdio.h>

int main (void)
{
    // Getting input from the user.
    long long card;
    do
    {
        printf("Number: ");
        scanf("%lld", &card);
    } while ( card < 1);
    
    int sum1, sum; 
    int sum2 = 0;
    for ( long long i = 10; i < 10000000000000000; i *= 100)
    {
        long long num1 = card / i;
        for ( long j = 10; j < 1000; j *= 100)
        {
            int num2 = num1 % j;
            int num3 = num2 * 2;
            int num6;
            if ( num3 > 9)
            {
                for ( int k = 10; k <= 10; k++)
                {
                   int num4 = num3 % 10;
                   int num5 = num3 / 10;
                   num6 = num4 + num5;
                   sum1 += num6;
                }
            }
            if (num3 <= 9)
            {
                sum1 += num3;
            }
        }
    }
    

    for (long long i = 1; i < 10000000000000000; i *= 100)
    {
        long long numb1 = card / i;
        for ( long j = 10; j < 1000; j *= 100)
        {
            int numb2 = numb1 % j;
            sum2 += numb2;
        }
    }
    sum = sum1 + sum2;
    if ( sum % 10 == 0 )
    {
        printf("VISA.\n");
    }
    else
    {
        printf("Invalid\n");
    }
}

//  5403750611010333
//  4003600000000014