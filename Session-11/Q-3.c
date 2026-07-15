#include<stdio.h>
void main(){
    int orders[5] = {100,200,300,400,500};
    int  *ptr;
    ptr = orders;

    printf("Orders Amounts and Their Addresses:\n");

    for(int i=0; i < 5; i++)
    {
        printf("Order %d = %d\tAddress = %p\n",i + 1, *ptr,ptr);
        ptr++;
    }
}