#include<stdio.h>
#include<string.h>
void main()
{
    char team[30];

    printf("Enter your favorite IPL team: ");
    scanf("%s",team);

    if (strcmp(team, "MI")== 0)
    {
        printf("Go Mumbai Indian!\n");
    }
    else if (strcmp(team, "CSK") == 0)
    {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "RCB") == 0)
    {
        printf("Ee Sala Cup Namde!\n");
    }
    else if (strcmp(team, "KKR") == 0)
    {
        printf("Korbo Lorbo Jeetbo!\n");
    }
    else if (strcmp(team, "GT") == 0)
    {
        printf("Go Gujarat Titans!\n");
    }
    else
    {
        printf("Team not found!\n");
    }
}