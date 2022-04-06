#include<stdio.h>
int main()
{
    int num,Dec_num=0,rem,weight=1;
    printf("Enter Your Binary Number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        Dec_num= Dec_num + rem*weight;
        num=num/10;
        weight=weight*2;

    }
    printf("The Decimal Number is: %d",Dec_num);
}