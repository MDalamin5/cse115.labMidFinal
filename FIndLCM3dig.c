#include<stdio.h>
int main()
{
    int num1,num2,num3,large;

    printf("Enter three integer number: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3){
        large=num1;
    }

    if(num2>num1 && num2>num3){
        large=num2;
    }

    if(num3>num1 && num3>num2){
        large=num3;
    }

    while (1)
    {
        if(large%num1==0 && large%num2==0 && large%num3==0)
        {
            printf("%d is lcm.",large);
            break;
        }
        large++;
    }
    
}