#include<stdio.h>
void formatPrice(int price)
{
    if(price >= 1000)
    {
        printf("₹%d, %03d", price / 1000, price % 1000);
    }
    else{
        printf("₹%d", price);
    }
}
void main()
{
    int price1 = 2000;
    int price2 = 24999;
    int price3 = 999;

    printf("\nproduct 1 (smartphone): ");
    formatPrice(price1);

    printf("\nproduct 2 (Laptop): ");
    formatPrice(price2);

    printf("\nproduct 3 (Headphones): ");
    formatPrice(price3);
}