#include<stdio.h>
#include<ctype.h>

void getUserInitials(char name[])
{
    int i;
    printf("%c", toupper(name[0]));

    for(i=0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i+1] != '\0')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
}

void main()
{
    char name[] = "virat kohli";

    printf("full name: %s\n", name);
    printf("Initials : ");

    getUserInitials(name);
}