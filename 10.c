/*Author: Alomgir
 date: 27/2/2022*/

#include <stdio.h>
int main(void)
{
    int month1,day1,year1,month2,day2,year2,earliest,latest;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    latest=(month1*30) +day1 + (year1*365);
    if (latest==0)
    {
        return 0;
    }
    earliest=latest;
    while(latest!=0)
    {
        if (latest<=earliest)
        {
            month1=month2;
            day1=day2;
            year1=year2;
            earliest=latest;
        }
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d",&month2,&day2,&year2);
        latest = (month2*30) + day2 + (year2*365);
    }
    printf("%d/%d/%.2d is the earliest date", month1, day1, year1);
    getch();
}
