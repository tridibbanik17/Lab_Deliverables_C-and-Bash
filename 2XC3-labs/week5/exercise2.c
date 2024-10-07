#include <stdio.h>
#include <stdlib.h>

int main()
{
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
                        printf("no dates entered.\n");
                        return EXIT_FAILURE;
                }

		else if ((month > 12) || (month < 1))
		{
			printf("The month should be an integer between 1 and 12.\n");
			return EXIT_FAILURE;
		}

		else if ((day > 31) || (day < 1))
		{
			printf("The day should be an integer between 1 and 31.\n");
			return EXIT_FAILURE;
		}

		else if (year < 1987) 
		{
			printf("The earliest valid date is 5/17/1987.\n");
			return EXIT_FAILURE;
		}

		else if ((year == 1987) && (month < 5))
		{
			printf("The earliest valid date is 5/17/1987.\n");
			return EXIT_FAILURE;
		}

		else if ((year == 1987) && (month == 5) && (day < 17))
                {
                        printf("The earliest valid date is 5/17/1987.\n");
                        return EXIT_FAILURE;
                }

	} while ((year >= 1987));

	return EXIT_SUCCESS;
}
