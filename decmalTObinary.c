#include<stdio.h>
int main()
{
    int num,bin_num,result=0;
    printf("Enter Your Decimal Number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        bin_num=num%2;
        result=result*10 + bin_num;
        
        num=num/2;
    }

    int rev,rev_res=0;

    while(result!=0)
    {
        rev=result%10;
        rev_res=rev_res*10+rev;
        result=result/10;
    }

    printf("The Binary Number is: %d",rev_res);
}