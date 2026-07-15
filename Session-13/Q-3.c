#include<stdio.h>
#include<stdlib.h>
void main(){

    FILE* fptr;
    char song[]="Varoon\nDie with A Smile";
    fptr=fopen("playlist.txt","a");
    if(fptr == NULL)
    {
        printf("File is not opened.");
    }
    else{
        printf("File is opened.");
        fputs(song,fptr);
        fputs("\n",fptr);
        fclose(fptr);
        printf("Successfully written in  file playlist.txt\n");
        printf("The file is Now closed.");
    }
}
