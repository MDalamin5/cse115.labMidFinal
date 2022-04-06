#include<stdio.h>
#include<math.h>

int main(){
    
    int i,sum=0;

    for(i=2; i<=8; i=i+3){
        sum=sum+ pow(i,3);
    }

    printf("%d is the sum.",sum);
}