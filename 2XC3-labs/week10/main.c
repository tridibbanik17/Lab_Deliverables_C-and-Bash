#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "string_utilities.h"

#define INPUT_SIZE 1024

int main() {
    char input[INPUT_SIZE + 1];

    while (fgets(input, INPUT_SIZE, stdin)) {
        // Remove the trailing newline, if present
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        // Trim the input
        trim(input);
        printf("Trimmed: '%s'\n", input);

        // Skip empty lines
        if (input[0] == '\0') {
            continue;
        }

        // Convert to uppercase and print
        to_upper(input);
        printf("Uppercase: %s\n", input);

        // Convert to lowercase and print
        char *lowercase = to_lower_pure(input);
        if (lowercase != NULL) {
            printf("Lowercase: %s\n", lowercase);
            free(lowercase); // Deallocate memory for lowercase string
        } else {
            fprintf(stderr, "Memory allocation failed for lowercase conversion.\n");
        }
    }

    return 0;
}

