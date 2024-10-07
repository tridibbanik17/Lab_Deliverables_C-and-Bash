#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int numberOfDays;
	printf("How many days this month? ");
	scanf(" %d", &numberOfDays);

	if ((numberOfDays > 31) || (numberOfDays < 28))
	{
		printf("The number of days cannot be below 28 or above 31.\n");
		return EXIT_FAILURE;
	}

	int firstDay;
	printf("What’s the starting day (1=Monday, 7=Sunday)? ");
	scanf(" %d", &firstDay);

	if ((firstDay < 1) || (firstDay > 7))
	{
		printf("Please enter an integer between 1 and 7.\n");
		return EXIT_FAILURE;
	}

	printf(" M   T   W   T   F   S   S ");
	printf("\n");
	for (int i = 1; i <= numberOfDays; i++)
	{
		if (firstDay == 1)
		{
			if (i <= 9) printf(" %d  ", i);
                        if (i > 9)  printf("%d  ", i);
			if ((i == 7) || (i == 14) || (i == 21) || (i == 28)) printf("\n");
		}

                if (firstDay == 2)
                {
                        if (i == 1) printf("     %d  ", i);
			if ((i > 1) && (i <= 9)) printf(" %d  ", i); 
                        if (i > 9)  printf("%d  ", i);
                        if ((i == 6) || (i == 13) || (i == 20) || (i == 27)) printf("\n");
                }

                if (firstDay == 3)
                {
                        if (i == 1) printf("         %d  ", i);
			if ((i > 1) && (i <= 9)) printf(" %d  ", i);
                        if (i > 9)  printf("%d  ", i);
                        if ((i == 5) || (i == 12) || (i == 19) || (i == 26)) printf("\n");
                }

                if (firstDay == 4)
                {
                        if (i == 1) printf("             %d  ", i);
			if ((i > 1) && (i <= 9)) printf(" %d  ", i);
                        if (i > 9)  printf("%d  ", i);
                        if ((i == 4) || (i == 11) || (i == 18) || (i == 25)) printf("\n");
                }

                if (firstDay == 5)                        
                {
			if (i == 1) printf("                 %d  ", i);
                        if ((i > 1) && (i <= 9)) printf(" %d  ", i);
                        if (i > 9)  printf("%d  ", i);
                        if ((i == 3) || (i == 10) || (i == 17) || (i == 24)) printf("\n");
                }

                if (firstDay == 6)
                {
                        if (i == 1) printf("                     %d  ", i);
                        if ((i > 1) && (i <= 9)) printf(" %d  ", i);
			if (i > 9)  printf("%d  ", i);
                        if ((i == 2) || (i == 9) || (i == 16) || (i == 23) || (i == 30)) printf("\n");
                }

                if (firstDay == 7)
                {
                        if (i == 1) printf("                         %d  ", i);
                        if ((i > 1) && (i <= 9)) printf(" %d  ", i);
			if (i > 9)  printf("%d  ", i);
                        if ((i == 1) || (i == 8) || (i == 15) || (i == 22) || (i == 29)) printf("\n");
                }
	}
	printf("\n");
	return EXIT_SUCCESS;
}	
