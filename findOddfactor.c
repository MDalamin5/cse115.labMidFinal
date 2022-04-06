#include<stdio.h>
int main(){
    int num,i;
    printf("Enter Your number :");
    scanf("%d",&num);
    printf("The odd Number Is: \n");
    for(i=1; i<=num/2; i=i+2){
        if(num%i==0){
            printf("    %d\n",i);
        }
    }
}