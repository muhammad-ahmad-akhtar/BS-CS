#include <stdio.h>

int main(void)
{
    int sum = 0;
    for (int x = 2; x <= 100; x +=2) 
    {
        sum += x;
    }
    printf("The Sum is %d.\n", sum);
}