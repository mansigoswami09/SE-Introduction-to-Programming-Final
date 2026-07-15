#include<stdio.h>
void main(){
    int dailysteps[7]={100,200,300,400,500,600,700};

    printf("Daily steps: \n");

    for(int i=0; i < 7; i++)
    {
        printf("Day %d: %d steps\n", i + 1, dailysteps[i]);
    }
}