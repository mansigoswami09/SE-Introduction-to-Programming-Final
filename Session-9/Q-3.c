#include<stdio.h>

float calculateAverage(int orders[] , int size)
{
    int sum =0;
    for(int i=0; i < size; i++)
    {
        sum += orders[i];
    }
    return (float)sum / size;

}
int main()
{
    int dailyOrders[7] ={250,180,400,450,500,550,275};

    float average = calculateAverage(dailyOrders, 7);

    printf("Average weekly Zomato spending: %.2f\n", average);

    return 0;
}