#include <stdio.h>
#include <math.h>
int main()
{
    int n,num,digit_count,lastDigit,firstDigit,a,b,middle,swap,count = 0;
    printf("Enter any number : ");
    scanf("%d",&num);
    lastDigit = num%10;
    printf("The last digit: %d\n", lastDigit);
    while(num>=10)
    {
        num/=10;
    }

num==n;
        while(n>0);
        {
            n/= 10;
            count++;
        }

 printf("The first digit: %d\n\n",num);
        printf("Number of digits: %d", count);




}



/*a = lastDigit * (pow(10, digit_count-1));
printf("Value of a :%d",a);
//int temp = n;
b = temp % (int) (firstDigit* (pow(10, digit_count-1))) ;
printf("\nValue of b :%d",b);
//temp = b / 10;


swap = a+b-lastDigit+firstDigit;
printf("\n%d",swap);

} */
