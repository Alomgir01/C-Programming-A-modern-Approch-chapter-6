/*Author: Alomgir
 date: 19/3/2022*/

#include <stdio.h>
int main(void)
{
    int number,remainder;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("The reversal is: ");
    do
    {
        remainder =number%10;
        printf("%d",remainder);
        number/=10;
    }
    while (number!=0);
    return 0;
}
