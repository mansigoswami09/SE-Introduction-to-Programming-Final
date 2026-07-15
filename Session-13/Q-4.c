#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main(){

    FILE* fptr;
    char song[50];
    char lowersong[50];

    fptr = fopen("playlist.txt","r");

    if(fptr == NULL)
    {
        printf("The file is not opened.");
    }
    else{
        printf("Songs contaning the word 'love' :\n");

        while(fgets(song,50,fptr) != NULL)
        {
            strcpy(lowersong , song);

            for(int i=0; lowersong[i] != '\0'; i++)
            {
                lowersong[i] = tolower(lowersong[i]);
            }
            if(strstr(lowersong ,"love") != NULL)
            {
                printf("%s", song);
            }
        }
        fclose(fptr);
    }
}
