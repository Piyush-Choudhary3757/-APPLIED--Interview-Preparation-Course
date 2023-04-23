int isprime(int_1){
    int i;

    for(i=2;i<=a-1;i++) {
        if(a%i==0)
        return(0);
                        }
}

main(){
    int a;
    int a_p;

    printf("Enter a number:");
    scanf("%d", &a);

    a_p = isprime(a);
    if (a_p == 1){
        printf("%d is prime",a);
                }
    else
    {
        printf("%d is not prime",a);
    }
    printf("\nEnter another number:");
    scanf("%d", &a);

    a_p = isprime(a);
    if (a_p ==1)
    {
        printf("%d is prime",a);
     }
    else
    {
        printf("%d is not prime",a);
    }
}
