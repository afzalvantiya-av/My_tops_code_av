#include<stdio.h>

void main(){

    const float gstrate=0.18;
    float baseprice=500;

    float gst=baseprice*gstrate;
    float finalprice=baseprice+gst;

    printf("Base price of Order:%f \n",baseprice);
    printf("GST :%f \n",gst);
    printf("Final Price with GST :%f \n",finalprice);

}