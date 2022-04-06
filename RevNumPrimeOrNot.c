#include<stdio.h>
int main(){
    int num,temp,rev,result=0,rem;
    printf("Enter YOur number: ");
    scanf("%d",&num);

    temp=num;

    while(num!=0){
        rem=num%10;
        result=result*10+rem;
        num=num/10;
    }

    printf("The reveras number is : %d\n",result);

    if(temp==result){
        printf("Its a palendrom number: ");
    }


    int i,flat=0;
    for(i=2; i<=result/2; i++)
    {
        if(result%i==0)
        {
            flat=1;
            break;
        }
    }

    if(flat==0){
        printf("Its a prime number: %d",result);
    }
    else{
        printf("%d is not a prime number.",result);
    }


}