#include<stdio.h>
#include<ctype.h>
#include<string.h>

void capitalizeFirstLetter(char str[])
{
    if(strlen(str) > 0)
    {
        str[0] = toupper(str[0]);
    }
}

void main()
{
    char productName[] = "iphone 16";
    char userName[] = "mansi";

    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(userName);

    printf("Product Name: %s\n", productName);
    printf("Username: %s\n", userName);
}