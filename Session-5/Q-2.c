#include<stdio.h>
void main()
{
    int choice;
    printf("Select Meal Time\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Suggestion: poha");
            break;

        case 2:
            printf("Suggestion: Thali");
            break;
        case 3:
            printf("Suggestion: Paneer Butter Masala");
            break;
        case 4:
            printf("Suggestion: sandwich");
            break;
        default:
        printf("Try some fruits!");
    }
}