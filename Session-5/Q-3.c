#include<stdio.h>
void main()
{
    float amount,finalAmount;

    printf("Enter Cart amount:");
    scanf("%f", &amount);

    if(amount > 1000)
    {
        if(amount > 2000)
        {
            finalAmount = amount - (amount * 20 / 100);
            printf("200%% Discount Applied\n");
        }
        else{
            finalAmount = amount - (amount *10 /100);
            printf("100% Discount Applied\n");
        }
    }
    else{
        finalAmount = amount;
        printf("No Discount Apllied\n");
    }
    printf("Final Amount = %.2f", finalAmount);
}