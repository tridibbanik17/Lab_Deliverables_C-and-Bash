/*Author: Tridib Banik, Student Number: 400514461, MacID: banikt       *This C program reads the output from the wc command as doubles, computes the average line length and prints it to stdout rounded to 1 decimal place.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	double lineNumbers;
	double wordNumbers;
	double characterNumbers;

	if (scanf("%lf %lf %lf", &lineNumbers, &wordNumbers,  &characterNumbers) != 3)
	{
		fprintf(stderr, "There was an error reading input from wc.\n");
		return EXIT_FAILURE;	
	}

	if (lineNumbers == 0)
	{
		printf("The average line length is 0.0\n");
		return EXIT_SUCCESS;
	}

	else
	{
		double averageLineLength = (characterNumbers - lineNumbers) / lineNumbers;

       		printf("%.1lf\n", averageLineLength);
	}

	return EXIT_SUCCESS;
}

