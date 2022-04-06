/*
#include<stdio.h>
int main(){
    int i,j,poduct,super_fact=1,n;
     printf("Enter the value of N: ");
     scanf("%d",&n);

     for(i=1; i<=n; i++){
         poduct=1;
         for(j=1;j<=i; j++)
         {
             poduct=poduct*j;
         }

         super_fact=super_fact*poduct;
     }

     printf("%d is super fact",super_fact);
}
*/

#include<stdio.h>

int fact(int n)
{
    int i,fac=1;
    for(i=1; i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}

int main()
{
    int n,i,superFact=1;
    printf("Enter The value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       // fact(i);
        superFact=superFact*fact(i);
    }

    printf("The Super-Factorial is = %d",superFact);



}