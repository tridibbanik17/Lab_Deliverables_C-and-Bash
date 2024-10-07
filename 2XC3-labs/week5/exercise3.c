#include <stdio.h>
#include <stdlib.h>

int main() {
    int month;
    int day;
    int year;

    do {
        printf("Enter a date (mm/dd/yyyy): ");
        int userInput = scanf("%d /%d /%d", &month, &day, &year);

        if (userInput == EOF) 
	{
            printf("Program terminated.\n");
            return EXIT_FAILURE;
        } 
	
	else if (userInput == 0) 
	{
            printf("No dates entered.\n");
            return EXIT_FAILURE;
        }

        switch (month) {
            case 1:
                printf("January ");
                break;
            case 2:
                printf("February ");
                break;
            case 3:
                printf("March ");
                break;
            case 4:
                printf("April ");
                break;
            case 5:
                printf("May ");
                break;
            case 6:
                printf("June ");
                break;
            case 7:
                printf("July ");
                break;
            case 8:
                printf("August ");
                break;
            case 9:
                printf("September ");
                break;
            case 10:
                printf("October ");
                break;
            case 11:
                printf("November ");
                break;
            case 12:
                printf("December ");
                break;
            default:
                printf("Invalid month.\n");
                return EXIT_FAILURE;
        }

        printf("%d, %d\n", day, year);

        // Check for invalid day based on month
        switch (month) {
            case 4: case 6: case 9: case 11:
                if (day > 30) 
		{
                    printf("Invalid day for this month.\n");
                    return EXIT_FAILURE;
                }
                break;
            case 2:
                // Check for February month which is assumed to always have 28 days.
            	if (day > 28) 
		{
                	printf("Invalid day for this month.\n");
                        return EXIT_FAILURE;
                }
                break;
            default:
                // Other months have 31 days
                if (day > 31) 
		{
                    printf("Invalid day for this month.\n");
                    return EXIT_FAILURE;
                }
                break;
        }

        if (year < 1987) {
            printf("The earliest valid date is May 17, 1987.\n");
            return EXIT_FAILURE;
        }

    } while (year >= 1987);

    return EXIT_SUCCESS;
}

