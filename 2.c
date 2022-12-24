#include <stdio.h>
main()
{
    int num,last ;
    printf("Enter any number : ");
    scanf("%d",&num);
    last = num%10;
    printf("The last digit: %d\n", last);
    while(num>=10)
    {
        num/=10;
    }
    printf("The first digit: %d\n",num);
}
