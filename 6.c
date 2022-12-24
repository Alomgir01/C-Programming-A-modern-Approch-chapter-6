#include <stdio.h>
int main(void)
{
    int num,swap ;
    printf("Enter any number : ");
    scanf("%d",&num);

    printf("Entered number ")
    while(num>0)
    {
        swap=num%10;
        printf("The swap number is %d\n",swap);
        num=num/10;
    }

    return 0;
}
