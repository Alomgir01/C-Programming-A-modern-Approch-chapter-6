/*write a program that ask the user to
 enter a two number then prints the number with its revered
Author: Alomgir
 date: 27/2/2022*/

#include <stdio.h>
int main(void)
{
    int i, n, odd, square;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d",&n);
    odd = 3;
    i=1;
    for(square=1; i<=n; odd+=2)
    {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }
    return 0;
}
