int main()
{
    int i,n,d;
    printf("Enter number: ");

    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
            break;

        printf("%d cubed is %d\n",n,n*n*n);

        getch();
    }
}
