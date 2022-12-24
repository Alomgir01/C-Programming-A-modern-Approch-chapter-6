#include <stdio.h>
int main(void)
{
    int num,last,first_digit,last_digit,digit,i ;
    printf("Enter any number : ");
    scanf("%d",&num);
    last = num%10;
    printf("The last digit: %d\n", last);
    while(num>=10)
    {
        num/=10;
    }
    printf("The first digit: %d\n",num);

    if(first_digit-i>=1 && i<=9)
    {
        if(last_digit-i>=1 && i<=9)
            digit==first_digit==last_digit;
        }

    printf("swap number is: %d%d%d\n",last,digit, num);

    return 0;
}
