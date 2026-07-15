#include<stdio.h>
    void incrementFollowers(int *followers, int n)
    {
        for(int i=0; i< n; i++) 
        {
        *followers = *followers + 100;
        followers++;
        }
    }

    void main()
    {
        int followers[5]= {1000,1500,2000,2500,3000};

        incrementFollowers(followers, 5);

        printf("Updated Followers:\n");

        for(int i = 0; i< 5; i++)
        {
            printf("Friend %d = %d\n", i + 1, followers);
        }
    }