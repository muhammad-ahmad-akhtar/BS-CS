#include <stdio.h>
#include <string.h>

int main(void)
{
    // Getting the input from the use r and validating it.
    printf("Binary Text: ");
    int binary = 0;
    scanf("%d", &binary);

    // Implementing the logic.
    int num1 = ( ( binary / 1) % 10 ) * 1;
    int num2 = ( ( binary / 10) % 10 ) * 2;
    int num3 = ( ( binary / 100) % 10 ) * 4;
    int num4 = ( ( binary / 1000) % 10 ) * 8;
    int num5 = ( ( binary / 10000 ) % 10 ) * 16;

    //printf("Num1: %i\nNum2: %i\nNum3: %i\nNum4: %i\nNum5: %i\n", num1, num2, num3, num4, num5);

    int sum = num1 + num2 + num3 + num4 + num5;
    printf("Number was: %i.\n", sum);
}