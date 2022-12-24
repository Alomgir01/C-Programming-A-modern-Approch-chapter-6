/*write a program that ask the user to enter a fraction then reduces the fraction to lowest terms
Author: Alomgir
 date: 19/3/2022*/

#include <stdio.h>
int main(void)
{
    int numerator,denominator,x,y,remainder;
    printf("Enter a fraction(x/y): ");
    scanf("%d/%d", &numerator,&denominator);
    x = numerator;
    y = denominator;
    while(y!=0)
    {
        remainder=x%y;
        x=y;
        y=remainder;
    }
    numerator/=x;
    denominator/=x;
    printf("In lowest terms: %d/%d\n",numerator,denominator);
    return 0;
}
