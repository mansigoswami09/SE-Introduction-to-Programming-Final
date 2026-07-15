#include<stdio.h>
void main(){

    FILE* fptr;

    char song1[] ="Love story";
    char song2[] ="Perfect";
    char song3[] ="shape of you";

    fptr = fopen("playlist.txt", "w");

    if(fptr == NULL)
    {
        printf("The file is not opened.");
    }
    else{
        printf("The file is opened.\n");

        fputs(song1,fptr);
        fputs("\n",fptr);

        fputs(song2,fptr);
        fputs("\n",fptr);

        fputs(song3,fptr);
        fputs("\n",fptr);

        fclose(fptr);

        printf("Data successfully written in file playlist.txt\n");
        printf("The file is now closed.");

    }
}