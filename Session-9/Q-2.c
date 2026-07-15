#include<stdio.h>
void main(){

    int playlistRating[3][5] = {
        {5,4,5,3,4},
        {4,5,4,5,5},
        {3,4,5,4,3}
    };

    printf("Rating for the second playlist:\n");
    
    for(int i=0; i<5; i++)
    {
        printf("%d ", playlistRating[1][i]);
    }
}