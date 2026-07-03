#include<stdio.h>
void main(){
    char playlistName[]="My favorites";
    int totalSongs=25;
    float avgDuration=3.8;

    printf("My favorite spotify playlist is '%s'. It has %d songs with an average duration of %.1f minutes. \n",playlistName,totalSongs,avgDuration);
}