#include<stdio.h>
void main(){
    int likes=200;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Value of likes= %d\n", likes);
    printf("Value using pointer = %d\n",*ptrLikes);
    printf("Address stored in ptrLikes = %p\n",ptrLikes);
}