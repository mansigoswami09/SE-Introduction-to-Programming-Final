#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE* fptr;
    char song[100];

    fptr=fopen("playlist.txt","r");

    if(fptr == NULL)
    {
        printf("File is Not opened.");
    }
    else
    {
        printf("File is opened");
        while(fgets("song",100,fptr) != NULL)
        {
            printf("%s",song);

        }
        fclose(fptr);
    }

}