#include<stdio.h>
#include<string.h>

void main(){
    char fullName[20];
    char username[6];

    printf("Enter your full name: ");
    scanf("%s", fullName);

    if(strlen(fullName) < 5)
    {
        strcpy(username, fullName);
    }
    else{
        strncpy(username, fullName, 5);
        username[5] = '\0';
    }
    printf("Generated Username: %s", username);
}