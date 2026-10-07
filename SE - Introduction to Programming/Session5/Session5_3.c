#include<stdio.h>
void main()
{
    int totalcartamount,discount;
    printf("Enter the Totalcartamount:");
    scanf("%d",&totalcartamount);

    if(totalcartamount>1000){
        if (totalcartamount>2000)
        {
            discount=(totalcartamount*20)/100;
            printf("discount Apply:%d\n",discount);
            printf("Final Price with Discount:%d",totalcartamount-discount);
        }
        else
        {
            discount=(totalcartamount*10)/100;
            printf("discount Apply:%d\n",discount);
            printf("Final Price with Discount:%d",totalcartamount-discount);
        } 
    }
    else
    {
        printf("Discount not apply",totalcartamount);
    }

}