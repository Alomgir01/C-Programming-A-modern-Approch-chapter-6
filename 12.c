/*Author: Alomgir
 date: 27/2/2022*/

#include <stdio.h>
int main(void)
{
    int number, index_outer, index_inner, factorial;
    float e, current_term, E;

    factorial = 1;
    current_term = 1.0f;
    e = 1.0f;
    printf("Enter an integer from 0 to 7 for n: ");
    scanf("%d", &number);
    printf("Enter a small floating-point number for E: ");
    scanf("%f", &E);
    printf("\n1");
    for (index_outer = 1; index_outer <= number; index_outer++)
    {
        for (index_inner = 1; index_inner <= index_outer; index_inner++)
        {
            factorial *= index_inner;
        }
        current_term = 1.0f/factorial;
        if (current_term < E)
            break;
        else
        {
            e += current_term;
            printf(" + %.4f (1/%d)", current_term, factorial);
            factorial = 1;
        }
    }
    printf(" is %.4f\n\n", e);
}
