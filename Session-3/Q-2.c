#include<stdio.h>
void main(){

    const float GST_RATE=0.18;

    float basePrice=500.0;

    float gstAmount=(basePrice * GST_RATE) /100;
    float finalprice=basePrice + gstAmount;


    printf("Base Price: %.2f\n", basePrice);
    printf("GST Amount: %.2f\n", gstAmount);
    printf("Final Price: %.2f\n", finalprice);
}