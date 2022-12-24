/*Author: Alomgir
 date: 27/2/2022*/

#include <stdio.h>
int main(void)
{
    int number, index1, index2, factorial;
    float e, series;
    factorial = 1;
    series = 1.0f;
    e = 1.0f;

    printf("Enter a number: ");
    scanf("%d", &number);
    for (index1=1; index2<= number; index2++)
    {
        for (index1= 1; index1<= index2; index1++)
        {
            factorial= factorial*index1;
        }
        series = 1.0f/factorial;
        e += series;
        printf(" + %.4f (1/%d)", series, factorial);
        factorial = 1;
    }
    printf(" is %.4f\n\n", e);
    return 0;
}
