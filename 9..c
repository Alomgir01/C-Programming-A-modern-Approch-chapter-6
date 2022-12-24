/*Author: Alomgir
 date: 19/3/2022*/

#include <stdio.h>
int main(void)
{
    float loan, balance, interest_rate, monthly_rate, payment;
    int payments, i;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    balance = loan;

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    monthly_rate =(interest_rate/100.0f)/12;

    printf("Enter monthly payment: ");
    scanf("%f",&payment);

    printf("Enter number of monthly payment: ");
    scanf("%d",&payment);

    for (i=1; i<=payments; i++)
    {
        balance=(balance-payment) + (balance*monthly_rate);
        printf("Balance remaining after payment %d: $%.2f\n", i, balance);
    }
}
