#include<stdio.h>
struct Time{
    int hours;
    int minutes;
};

struct MovieShow{
    char Movie[50];
    int screen;
    struct Time showTime;
};

void main(){

    struct MovieShow Show = {"3 Idiots",2,{7,30}};

    printf("Movie: %s, screen: %d, Time: %02d:%02d\n",
    Show.Movie,
    Show.screen,
    Show.showTime.hours,
    Show.showTime.minutes);
}