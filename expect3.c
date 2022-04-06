#include<stdio.h>
int main()
{
    int m,n,i,value;
    printf("Enter the value of m And n: ");
    scanf("%d %d",&m,&n);

    for(i=m; i<=n; i++)
    {
        if(i%2==0)
        {
            
            if(i%3==0)
            {
                continue;
            }
            printf("%d ",i);
        }
    }
    

}