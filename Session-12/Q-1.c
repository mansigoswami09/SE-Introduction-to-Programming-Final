#include<stdio.h>
struct playList{
    char title[50];
    char artist[50];
    int duration;
};

void main(){

struct playList song = {"Perfect","Ed sheeran",265};

printf("Song title: %s\n", song.title);
printf("Song Artist: %s\n", song.artist);
printf("Song Duration: %d\n", song.duration);
}