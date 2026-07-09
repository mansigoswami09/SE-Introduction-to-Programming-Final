#include<stdio.h>
void main(){
    int age;

    printf("Enter your age:");
    scanf("%d", &age);


    if (age >= 18)
    {
        printf("Eligible for Driving License\n");
    }
    if (age >= 21)
    {
        printf("Eligible for creadit card\n");
    }
    if (age >= 25)
    {
        printf("Eligible for car rental\n");
    }
    if (age < 18)
    {
        printf("Not Eligible");
    }
}