#include<stdio.h>
struct Bio{
    char description[100];
    int age;
};

struct InstaProfile{
    char username[50];
    int followers;
    struct Bio bio;
};

void main(){
    struct InstaProfile profile = {
        "mansi_goswami",
        1200,
        {"BCA Student | Python Learner", 21}
    };

    printf("username : %s\n", profile.username);
    printf("Followers :%d\n", profile.followers);
    printf("Description :%s\n", profile.bio.description);
    printf("Age  :%d\n",profile.bio.age);
}