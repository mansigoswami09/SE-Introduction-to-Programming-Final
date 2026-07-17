#include <stdio.h>
#include <stdlib.h>

#define DAYS 7
void main()
{
    int listeningMinutes[DAYS] = {0};
    int choice;
    int i;
    int total, highest;
    float average;
    char confirm;

    do
    {
        printf("\n========== MUSIC LISTENING LOGGER ==========\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter music listening minutes for 7 days:\n");

            for (i = 0; i < DAYS; i++)
            {
                printf("Day %d: ", i + 1);
                scanf("%d", &listeningMinutes[i]);
            }

            // Save weekly listening data into file
            FILE *file = fopen("music_log.txt", "w");

            if (file == NULL)
            {
                printf("Error opening file!\n");
            }
            else
            {
                for (i = 0; i < DAYS; i++)
                {
                    fprintf(file, "%d\n", listeningMinutes[i]);
                }

                fclose(file);
                printf("\nMusic listening data saved successfully!\n");
            }

            break;

        case 2:
            total = 0;
            highest = 0;

            // Read saved data from file
            FILE *readFile = fopen("music_log.txt", "r");

            if (readFile == NULL)
            {
                printf("\nNo saved music data found!\n");
            }
            else
            {
                for (i = 0; i < DAYS; i++)
                {
                    fscanf(readFile, "%d", &listeningMinutes[i]);
                }

                fclose(readFile);

                for (i = 0; i < DAYS; i++)
                {
                    total = total + listeningMinutes[i];

                    if (listeningMinutes[i] > highest)
                    {
                        highest = listeningMinutes[i];
                    }
                }

                average = total / 7.0;

                printf("\n========== WEEKLY REPORT ==========\n");
                printf("Total Listening Minutes: %d\n", total);
                printf("Average Listening Minutes: %.2f\n", average);
                printf("Highest Listening Minutes: %d\n", highest);
            }

            break;

        case 3:
            printf("\nAre you sure you want to reset weekly data? (Y/N): ");
            scanf(" %c", &confirm);

            if (confirm == 'Y' || confirm == 'y')
            {
                // Clear array data
                for (i = 0; i < DAYS; i++)
                {
                    listeningMinutes[i] = 0;
                }

                // Delete file contents by opening in write mode
                FILE *resetFile = fopen("music_log.txt", "w");

                if (resetFile == NULL)
                {
                    printf("Error resetting file!\n");
                }
                else
                {
                    fclose(resetFile);
                    printf("\nWeekly data reset successfully!\n");
                }
            }
            else
            {
                printf("\nReset cancelled.\n");
            }

            break;

        case 4:
            printf("\nThank you for using Music Listening Logger!\n");
            break;

        default:
            printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);


}