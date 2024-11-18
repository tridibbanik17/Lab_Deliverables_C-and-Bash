#include <stdio.h>
#include <string.h> // For strlen
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

        // Skip empty lines
        if (input[0] == '\0') {
            continue;
        }

        to_upper(input); // Convert input to uppercase
        printf("%s\n", input); // Print the converted string
    }

    return 0;
}
