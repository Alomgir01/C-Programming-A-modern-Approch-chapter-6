#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter program prints a table of squre: \n");
    printf("Enter the number of entries in table: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%10d %10d\n",i,i*i);
        ++i;
    }
    return 0;
}
