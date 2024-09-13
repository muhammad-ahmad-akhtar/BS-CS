/*
(Dangling-Else Problem) Determine the output for each of the following when x is 9 and
y is 11, and when x is 11 and y is 9. The compiler ignores the indentation in a C program.
Also, the compiler always associates an else with the previous if unless told to do 
otherwise by the placement of braces {}. On first glance, you may not be sure which if an 
else matches, so this is referred to as the “dangling-else” problem. We eliminated the 
indentation from the following code to make the problem more challenging. 
[Hint: Apply indentation conventions you have learned.]

a)     if (x < 10)
       if (y > 10)
       puts("*****"); 
       else
       puts("#####");
       puts("$$$$$");
       
b)     if (x < 10) 
       {
        if (y > 10)
        puts("*****"); 
       }
       else 
       {
        puts("#####");
        puts("$$$$$");
       }
*/

#include <stdio.h>

int main (void)
{
    // To Do.
}