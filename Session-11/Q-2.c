#include<stdio.h>
void swapPlaylistCounts(int *a, int *b){

    int temp;

    temp = *a;
    *a= *b;
    *b =temp;
}

void main(){
    int playlist1= 20;
    int playlist2= 40;

    printf("Befor swapping:\n");
    printf("Playlist 1 Songs = %d\n",playlist1);
    printf("playlist 2 Songs = %d\n", playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("After swapping:\n");
    printf("Playlist 1 Songs = %d\n", playlist1);
    printf("Playlist 2 Songs = %d\n", playlist2);
}