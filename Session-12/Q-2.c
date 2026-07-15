#include<stdio.h>

struct FoodItem{

    char itemname[20];
    float price;
    float rating;
};

void main(){

    struct FoodItem menu[3]={
        {"paneer Butter Masala",280,4.5},
        {"pulav",150,4.7},
        {"Chocolate brownie",119,5.5},
    };

    int i;
    printf("=====Zemeto Menu=====");
    for(i=0;i<3;i++)
    {

    printf("Item %d\n", i+1);
    printf("Name :%s\n",menu[i].itemname);
    printf("Price:%.2f\n",menu[i].price);
    printf("Rating:%.2f\n",menu[i].rating);
    }
}