#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define quiz questions and answers
const char *questions[] = {
    "What command would you use to edit a file named 'hello' on Linux shell?",
    "What function would you use to print a statement on C?",
    "What flag would you use to commit a message to a repository on GitHub?"
};

const char *answers[] = {
    "vi hello",
    "puts",
    "-m"
};

// Function to print usage information
void print_usage() {
    printf("Usage: quiz [-#] [<answer>]\n");
    printf("Try 'quiz --help' for more information.\n");
}

int main(int argc, char *argv[]) {
    int question_number = -1;
    char *answer = NULL;

    // Parse command line arguments
    if (argc > 1) {
        if (argv[1][0] == '-') {
            question_number = atoi(argv[1] + 1);
            if (question_number < 1 || question_number > 3) {
                printf("Invalid question number.\n");
                print_usage();
                return EXIT_FAILURE;
            }
        } else {
            answer = argv[1];
        }
    }

    // Handle help flag
    if (argc == 2 && strcmp(argv[1], "--help") == 0) {
        printf("Quiz utility\n");
        printf("Usage: quiz [-#] [<answer>]\n");
        printf("  -#: Specify the question number (1-3)\n");
        printf("  <answer>: Provide your answer to the question\n");
        return EXIT_SUCCESS;
    }

    // Display the question based on the question number
    if (question_number != -1) {
        printf("%d\n", question_number);
        printf("%s\n", questions[question_number - 1]);
    }

    // Check if an answer is provided
    if (answer != NULL) {
        if (question_number == -1 || strcmp(answer, answers[question_number - 1]) == 0) {
            printf("Correct!\n");
        } else {
            printf("Incorrect. The correct answer is: %s\n", answers[question_number - 1]);
        }
    }

    return EXIT_SUCCESS;
}
