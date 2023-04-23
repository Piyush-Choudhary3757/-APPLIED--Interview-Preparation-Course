main(){
    int a;
    int i;
    printf("Enter a Number:");
    scanf("%d",&a);

    for(i=2;i<=a;i++){
        if(a%i==0){
            printf("NOT PRIME, divisible by %d",i);
            exit(0);
        }

    }

    printf("PRIME");
}