/*3.16 (Gas Mileage) Drivers are concerned with the mileage obtained by their 
auto mobiles. One driver has kept track of several tankfuls of gasoline by
recording miles driven and gallons used for each tankful. Develop a program 
that uses scanf to input the miles driven and gallons used for each tankful. 
The program should calculate and display the miles per gallon obtained for each
tankful. After processing all input information, the program should calculate 
and print the combined miles per gallon obtained for all tankfuls.*/

/*Here is a sample input/output dialog: 

Enter the gallons used (-1 to end): 12.8
Enter the miles driven: 287
The miles/gallon for this tank was 22.421875
Enter the gallons used (-1 to end): 10.3
Enter the miles driven: 200
The miles/gallon for this tank was 19.417475
Enter the gallons used (-1 to end): 5
Enter the miles driven: 120
The miles/gallon for this tank was 24.000000
Enter the gallons used (-1 to end): -1
The overall average miles/gallon was 21.601423*/

// Solution.

//
/*#include <stdio.h>

int main (void)
{
    int gallons = 0;
    int miles, mile, gallon = 0;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%i", &gallons);

    while ( gallons != -1)
    {
        printf("Enter the miles driven: ");
        scanf("%d", &miles);

        // Calculations.
        //printf("the miles are %d and gallons are %d\n", miles,gallons);
        double milage = (double) miles / gallons;
        printf("The miles/gallon for this tank was %.4f\n", milage);
        gallon += gallons;
        mile += miles;

        printf("Enter the gallons used (-1 to end): ");
        scanf("%d", &gallons);
    }
    double avg = (double) mile/gallon;
    printf("The overall miles/gallon is %f\n", avg);
}*/

#include <stdio.h>

int main(void) {
    double gallons = 0.0;
    double miles = 0.0;
    double totalGallons = 0.0;
    double totalMiles = 0.0;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%lf", &gallons);

    while (gallons != -1) {
        printf("Enter the miles driven: ");
        scanf("%lf", &miles);

        // Calculations.
        double mileage = miles / gallons;
        printf("The miles/gallon for this tank was %.4f\n", mileage);

        totalGallons += gallons;
        totalMiles += miles;

        printf("Enter the gallons used (-1 to end): ");
        scanf("%lf", &gallons);
    }

    if (totalGallons > 0) {  // Ensure no division by zero
        double avg = totalMiles / totalGallons;
        printf("The overall miles/gallon is %.4f\n", avg);
    } else {
        printf("No valid data entered.\n");
    }

    return 0;
}
