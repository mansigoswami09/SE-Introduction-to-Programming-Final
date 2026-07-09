#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void main(){
    char Songs[3][30]={
        "Believer",
        "Kesariya",
        "Vaaroon"
    };

    char guess[30];
    int random;

    srand(time(NULL));
    random = rand() % 3;

    printf("==== Guess the Song Game ====\n");

    do
    {
      printf("Guess the Song Name:");
      scanf(" %[^\n]", guess);

      if(strcmp(guess, Songs[random])== 0)
      {
        printf("Correct! You guessed the song.\n");
      }
      else
      {
        printf("Wrong Guess! Try Again.\n");
      }
    } while(strcmp(guess, Songs[random]) !=0);
    
}