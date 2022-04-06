#include<stdio.h>
int main(){

    int num1,num2,small,fact=1,gcd;

    printf("Enter your number: ");
    scanf("%d%d",&num1,&num2);

    small = (num1<num2) ? num1: num2;

    while(fact<=small){
        if(num1%fact==0 && num2%fact==0)
        {
            gcd=fact;
        }
        fact++;
    }

    printf("The gcd is: %d",gcd);

}