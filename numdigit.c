#include <stdio.h>
int main(void)
{
    int digits = 0, n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    do
    {
        n /= 10;               //n=n/10
        digits++;
    }
    while (n>0  );
    printf("The number has %d digit(s).\n\n", digits);
    return 0;
}
