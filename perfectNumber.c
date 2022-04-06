#include<stdio.h>
int main()
{
    int num,temp,i,sum=0;

    printf("Enter YOur number: ");
    scanf("%d",&num);

    temp=num;

    for(i=1; i<=num/2; i++){
        if(num%i==0){
            sum=sum+i;
        }
    }

    if(sum==temp){
        printf("Its a perfect number.");
    }

    else{
        printf("Not a perfect number.");
    }
}