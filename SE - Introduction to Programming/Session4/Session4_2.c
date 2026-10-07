#include<stdio.h>
#include<stdbool.h>

void main(){

    float productprice,discount,finalprice;

    printf("Enter the Product Price:");
    scanf("%f",&productprice);

    printf("Enter the discount:");
    scanf("%f",&discount);

    float discountamount =productprice*discount/100;
    printf("Final Discount:%f\n",discountamount);

    finalprice=productprice-discountamount;
    printf("Final Price:%f\n",finalprice);

    bool ismember;
    printf("Enter 1 for Membship or 0 for not member:");
    scanf("%d",&ismember);

    float extradiscount=finalprice * 5/100 * ismember;
    printf("ExtraDiscount:%f \n",extradiscount);

    printf("Final Price with All discount:%f \n",finalprice-extradiscount);
}