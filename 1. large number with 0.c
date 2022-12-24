/*write a program that finds the largest in a series of number entered by the user. The program must prompt the user to enter numbers one by one.
When the user enters 0 or a negative number, the program must display the largest nonnegative number entered.
Author- Alomgir
 date: 19/3/2022*/

#include <stdio.h>
int main(void)
{
    float number, largest;

    do
    {
        printf("Enter a number: ");
        scanf("%f",&number);
        if (number > largest)
            largest = number;
    }
    while (number>0);

    printf("The largest number entered was %.2f\n",largest);
    return 0;
}
