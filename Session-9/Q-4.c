#include<stdio.h>
void main(){
    int cricketScores[3][2]={
        {130,175},
        {230,172},
        {198,160}
    };
    int i;
    for(i=0 ; i< 3; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
        {
            printf("Highest scoer in match %d = %d\n", i + 1, cricketScores[i][0]);
        }
        else{
            printf("Highest score in match %d = %d\n", i + 1,cricketScores[i][1]);
        }
    }
}