/*Author: Tridib Banik, McMaster University, Software Engineering Level II.
 *This C program reas strings one at a time from stdin and writes them to stdout, one string in each line.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char myString[100];

    // A loop to read strings till the end of input.
    while (1)
    {
        //If scanf() returns anything other than 1, it means there was either a bad value entered or it was the end of file.
        if (scanf("%s", myString) != 1)
        {
            // Check for EOF
            if (feof(stdin))
            {
                break; // End of file reached
            }
            //If there is an error reading from stdin, it prints an error message.
            else
            {
                fprintf(stderr, "There was an error reading from stdin.\n");
                return EXIT_FAILURE;
            }
        }
    
   	 // Print one string per line to stdout
    	printf("%s\n", myString);
    
    }
    return EXIT_SUCCESS;
}
