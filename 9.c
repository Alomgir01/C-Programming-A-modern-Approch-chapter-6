#include <stdio.h>
#include <math.h>
int main()
{
    int n,number, first,last,swap;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Last digit %d\n",n%10);
    while(n>10)
        n/=10;
    printf("First Digit %d",n);
}













    /*d1 = num % 10;   /*first digit of reversed number */
    /*second digit of reversed number */

    /*printf("The reversal is %d\n\n", d1);
    {

    }
}
    /*{
        printf("%d\n",num);
        num2=num-d1;
        num2=num-d2;
        printf("%d",num1=num2);
    }
}



    /*int n,number,digit_count,lastDigit,firstDigit,a,b,middle,swap,count = 0;
    printf("Enter any number : ");
    scanf("%d",&number);

    lastDigit = number%10;
    printf("The last digit: %d\n", lastDigit);

    while(number>=10)
    {
        number/=10;
        firstDigit=number;
    }
    printf("The first digit: %d\n\n",firstDigit);



    printf("%d\n",lastDigit);
    {
        printf("%d\n",number);
    }
    printf("%d\n",firstDigit);


}
a = lastDigit * (pow(10, digit_count-1));
printf("Value of a :%d",a);
//int temp = n;
b = temp % (int) (firstDigit* (pow(10, digit_count-1))) ;
printf("\nValue of b :%d",b);
//temp = b / 10;


swap = a+b-lastDigit+firstDigit;
printf("\n%d",swap);

} */
