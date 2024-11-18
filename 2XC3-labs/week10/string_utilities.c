#include <stdlib.h> // For malloc and free
#include <string.h> // For strlen
#include "string_utilities.h"
#include <ctype.h>

void to_upper(char *string) {
    if (string == NULL) {
        return; // Return if string is null.
    }
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - ('a' - 'A'); // Convert to uppercase
        }
    }
}

char *to_lower_pure(const char *string) {
    if (string == NULL) {
        return NULL; // Handle null input
    }

    size_t length = strlen(string);
    char *new_string = malloc(length + 1); // Allocate memory for new string (+1 for null terminator)
    if (new_string == NULL) {
        return NULL; // Handle memory allocation failure
    }

    for (size_t i = 0; i < length; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            new_string[i] = string[i] + ('a' - 'A'); // Convert to lowercase
        } else {
            new_string[i] = string[i]; // Copy other characters unchanged
        }
    }
    new_string[length] = '\0'; // Null-terminate the new string

    return new_string;
}


void find_content(const char *string, char **first, char **last) {
    if (string == NULL || first == NULL || last == NULL) {
        return; // Handle null pointers gracefully
    }

    *first = *last = NULL; // Initialize pointers

    size_t length = strlen(string);
    if (length == 0) {
        *first = *last = (char *)string; // Both point to the null terminator for an empty string
        return;
    }

    // Find the first non-whitespace character
    const char *start = string;
    while (*start && isspace((unsigned char)*start)) {
        start++;
    }

    // If the string is all whitespace
    if (*start == '\0') {
        *first = *last = (char *)string + length; // Point to null terminator
        return;
    }

    // Find the last non-whitespace character
    const char *end = string + length - 1;
    while (end > start && isspace((unsigned char)*end)) {
        end--;
    }

    // Set pointers to the found positions
    *first = (char *)start;
    *last = (char *)end;
}

void trim(char *string) {
    if (string == NULL) {
        return; // Handle null input
    }

    char *first, *last;
    find_content(string, &first, &last);

    if (first == NULL || last == NULL || *first == '\0') {
        string[0] = '\0'; // If string is empty or all whitespace, set it to an empty string
        return;
    }

    // Move content to the front of the string
    size_t new_length = last - first + 1; // Length of the trimmed content
    memmove(string, first, new_length);  // Efficiently move content to the start of the string
    string[new_length] = '\0';          // Null-terminate the trimmed string
}

