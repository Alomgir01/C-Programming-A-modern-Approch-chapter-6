/*write a program that ask the user to enter two integer
 then calculates and display their greatest common divisor (GCD).
 Author: Alomgir
  date: 19/3/2022*/

#include <stdio.h>
int main(void)
{
    int m,n,remainder;
    printf("Enter two integers: ");
    scanf("%d%d",&m,&n);
    while (n!=0)
    {
        remainder=m%n;
        m=n;
        n=remainder;

    }
    printf("Greatest common divisor: %d\n\n",m);
    return 0;
}
