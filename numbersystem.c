// find power without use powerfunction: 

#include<stdio.h>
int main()
{
    int base, power, i, result=1;

    printf("Enter your base and power interger number: ");
    scanf("%d%d",&base,&power);

    for(i=1; i<=power; i++)
    {
        result=result*base;
    }

    printf("the result is = %d",result);
}