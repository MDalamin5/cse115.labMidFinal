#include<stdio.h>
int main()
{
    int n,r,i,product=1,product2=1,product3=1,value;
    double nCr;
    printf("Enter the value of n and r: ");
    scanf("%d%d",&n,&r);

    // For n factorial

    for(i=1; i<=n; i++){
        product=product*i;
    }

    value=n-r;

    for(i=1; i<=value; i++){
        product2=product2*i;
    }

    for(i=1; i<=r; i++){
        product3=product3*i;
    }

    nCr= (double)product/(product3*product2);

 printf("The result is nCr = %.1lf",nCr);

}