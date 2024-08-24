/**/

// Solution.

#include <stdio.h>

int main (void)
{
    int i = 2;

    while ( i <= 19)
    {
        if (i%2 == 0)
        {
            printf("* * * * * * * * * *\n");
        }
        else
        {
            printf(" * * * * * * * * * * \n");
        }
        i++;
    }
}