/*(Target Heart-Rate Calculator) While exercising, you can use a heart-rate
monitor to see that your heart rate stays within a safe range suggested by your doctors
and trainers. According to the American Heart Association (AHA) 
(http://bit.ly/AHATargetHeartRates), the formula for calculating your maximum heart rate in beats
per minute is 220 minus your age in years. Your target heart rate is 50–85% of your
maximum heart rate. Write a program that prompts for and inputs the user’s age and
calculates and displays the user’s maximum heart rate and the range of the user’s target heart rate. 
[These formulas are estimates provided by the AHA: 
maximum an target heart rates may vary based on the health, fitness and gender of the individual.
Always consult a physician or qualified healthcare professional before beginning or
modifying an exercise program.]*/

// Solution.

#include <stdio.h>

int main (void)
{
    printf("%s", "Enter Your Age: ");
    int age = 0;
    scanf("%d", &age);

    // Calculations.
    int max = 220 - age;
    printf("Your maximun heart rate should be: %d.\n", max);
    printf("Your target heart rate should be between: %d-%d.\n", 50 * max/100, 85 * max/100); 
}