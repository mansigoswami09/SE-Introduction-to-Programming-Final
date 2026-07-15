#include<stdio.h>
#include<string.h>
void addToCart(char cart[][20], int *count, char product[])
{
    strcpy(cart[*count], product);
    (*count)++;

    printf("\n Updated Cart: \n");
    for(int i=0; i < *count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}
void main()
{
    char cart[10][20];
    int count = 0;
    
    addToCart(cart, &count, "Laptop");
    addToCart(cart, &count, "Mouse");
    addToCart(cart, &count, "Keyboard");

    printf("\nCart in main function:\n");
    for(int i=0; i< count; i++)
    {
        printf("%d. %s\n", i+1, cart[i]);
    }
}