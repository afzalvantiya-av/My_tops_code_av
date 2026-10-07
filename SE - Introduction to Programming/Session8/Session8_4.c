#include<stdio.h>

    int formatprice(int price,char formatted[]){
        sprintf(formatted,"₹%d",price);
        return 0;
    }

void main(){

    char product1[20];
    char product2[20];
    char product3[20];

    formatprice(79999,product1);
    formatprice(39999,product2);
    formatprice(29999,product3);

    printf("Apple :%s\n",product1);
    printf("Samsung :%s\n",product2);
    printf("Vivo :%s\n",product3);

}