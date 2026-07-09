#include<stdio.h>
#include<conio.h>
void main(){
    int choice;
    char newteam[50];

    while(1)
    {
        printf("\n======IPL Team Menu =======\n");
        printf("1. View Favorite 3 IPL Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n My favorite IPL Teams:");
                printf("1. Chennai Super Kings\n");
                printf("2. Mumbai Indians\n");
                printf("3. Royal Challengers Bangaluru\n");
                break;

            case 2:
                printf("Enter New Team Name: ");
                scanf(" %[^\n]", newteam);
                printf("New Team Added: %s\n", newteam);

            case 3:
                printf("Exiting program...\n");

            default:
                printf("Invalid Choice! plese try again.\n");


        }
    }
}