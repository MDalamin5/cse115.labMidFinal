#include<stdio.h>
int main(){
    int num1,num2,num3,large;

    printf("Enter three number: ");
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


    printf("THe large number is: %d",large);
}