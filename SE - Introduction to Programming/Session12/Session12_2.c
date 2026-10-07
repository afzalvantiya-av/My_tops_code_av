#include<stdio.h>

    struct FoodItem{
       char itemname[30];
       float price;
       float rating;
    };
    
void main(){

    struct FoodItem menu[3]={{"Pizza",199,4.5},{"Burger",149,4.0},{"Pav Bhaji",299,4.2}};

    int index;

    for(index=0;index<3;index++){
        printf("Item Name:%s Price:%.2f Item Price:%.2f\n",menu[index].itemname,menu[index].price,menu[index].rating);
    }
}