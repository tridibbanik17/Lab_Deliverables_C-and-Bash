/*Author: Tridib Banik, Student Number: 400514461, MacID: banikt 
 *This C program knows at least three quiz questions and answers. Users interact with the program through command line flags.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//print_usage() function to print out usage instructions.
void print_usage() 
{
    printf("Usage: ./quiz [-#] [<answer>]\n");
    printf("Try './quiz --help' for more information.\n");
}

//print_help() function provides detailed information about how to use different commands.
void print_help() 
{
    printf("quiz: A simple Linux command line utility that knows at least three quiz questions and answers.\n");
    printf("Usage:\n");
    printf("  ./quiz -1                # Question about Linux\n");
    printf("  ./quiz -2                # Question about C\n");
    printf("  ./quiz -3                # Question about Git\n");
    printf("  ./quiz -1 \"my answer\"  # Provide answer to question 1\n");
    printf("  ./quiz --help            # Show help information\n");
}

//argc parament is an integer that counts the number of arguments passed to the command line and *argv[] is a string type that can access different arguments passed to the command line.
int main(int argc, char *argv[]) 
{
    //if the user only writes ./quiz or any other one word command.
    if (argc == 1) 
    {
        print_usage();
        return EXIT_FAILURE;
    }

    //Handle the --help flag
    if (strcmp(argv[1], "--help") == 0) 
    {
        print_help();
        return EXIT_SUCCESS;
    }

    //Handle inva-bad flag
    if (argv[1] == "-bad") 
    {
        print_usage();
        return EXIT_FAILURE;
    }

    // Question 1: Linux
    if (strcmp(argv[1], "-1") == 0) 
    {
        if (argc == 2) 
        {
            // Display question 1
            printf("What command would you use to edit a file named 'hello' on the Linux shell?\n");
        } 
        else if (argc == 3) 
        {
            // Check answer to question 1
            if (strcmp(argv[2], "vi") == 0) 
            {
                printf("The answer is correct.\n");
            } 
            else 
            {
                printf("The answer is incorrect.\n");
            }
        } 
        else 
        {
            print_usage();
            return EXIT_FAILURE;
        }
    }
    // Question 2: C
    else if (strcmp(argv[1], "-2") == 0) 
    {
        if (argc == 2) 
        {
            // Display question 2
            printf("What function would you use to print a statement in C?\n");
        } 
        else if (argc == 3) 
        {
            // Check answer to question 2
            if (strcmp(argv[2], "printf") == 0 || strcmp(argv[2], "puts") == 0) 
            {
                printf("The answer is correct.\n");
            } else 
            {
                printf("The answer is incorrect.\n");
            }
        } 
        else 
        {
            print_usage();
            return EXIT_FAILURE;
        }
    }
    // Question 3: Git
    else if (strcmp(argv[1], "-3") == 0) 
    {
        if (argc == 2) 
        {
            // Display question 3
            printf("What flag would you use to commit a message to a repository in Git?\n");
        } 
        else if (argc == 3) 
        {
            // Check answer to question 3
            if (strcmp(argv[2], "-m") == 0) 
            {
                printf("The answer is correct.\n");
            } 
            else 
            {
                printf("The answer is incorrect.\n");
            }
        } 
        else 
        {
            print_usage();
            return EXIT_FAILURE;
        }
    }
    //Handle invalid flag
    else 
    {
        print_usage();
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
