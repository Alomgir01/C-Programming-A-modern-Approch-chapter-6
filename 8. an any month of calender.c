/*write a program that prints a one month calender.
 Author: Alomgir
 date: 19/3/2022*/

#include <stdio.h>
int main(void)
{
    int days, start_day, i, j;
    printf("Enter number of days in month: ");
    scanf("%d",&days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    for(i=1; i<start_day; i++)
    {
        printf("   ");
    }
    for(j=1; j<=days; i++, j++)
    {
        printf("%3d",j);
        if (i%7 ==0)
            printf("\n");
    }
    return 0;
}
