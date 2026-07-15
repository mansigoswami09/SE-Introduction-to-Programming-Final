#include<stdio.h>
void increaseFollowersByValue(int followers)
{
    followers = followers + 1000;
    printf("Inside increseFollowersByValue: %d\n", followers);
}

void increseFollowersByReference(int *followers)
{
    *followers = *followers + 1000;
    printf("Inside increseFollowersByReference: %d\n", *followers);
}

void main(){
    int followers = 5000;
    printf("Original followers: %d\n", followers);

    increaseFollowersByValue(followers);
    printf("after increaseFolllowersByValue: %d\n", followers);

    increseFollowersByReference(&followers);
    printf("After increseFollowersByReference: %d\n", followers);
}