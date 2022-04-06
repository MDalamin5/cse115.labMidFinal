#include<stdio.h>
int main()
{
    int amount,price,Tot_price=0,a_kg=0;
    
    while (1)
    {
       printf("Enter Your amount: ");
       scanf("%d",&amount);
       if(amount<0)
       {
           printf("\nInvalid input, enter a positive number\n");
           continue;
       }

       else if(amount==0)
       {
           break;
       }


       printf("Enter price: ");
       scanf("%d",&price);

       if(price<0)
       {
           printf("\nInvalid input, enter a positive number\n");
           continue;
       }
       else if(price==0)
       {
           break;
       }

            

        else
        {
            Tot_price=Tot_price+ price;
            a_kg=a_kg+amount;
        }




    }

    printf("Total amount (in kg): %d, Total prince: %d",a_kg,Tot_price);
    printf(" ,Average price per kg: %.2f",(float)Tot_price/a_kg);

    
    
}