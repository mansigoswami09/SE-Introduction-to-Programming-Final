#include<stdio.h>
#include<string.h>

void main(){
    char source[] = "Flipkart";
    char shoppingApp[20];

    strcpy(shoppingApp, source);

    printf("Shopping App: %s", shoppingApp);
}