#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_utilities.h"

int main() {
    // Allocate modifiable strings
    char s1[] = "   hello friend   ";
    char s2[] = "   ";
    char s3[] = "\t\n   new String \t";
    char s4[] = "";

    char *first, *last;

    // Testing for exercise 3
    printf("Testing find_content function:\n");

    // Test case 1
    find_content(s1, &first, &last);
    if (first && last) {
        printf("First Input: '%s'\n", s1);
        printf("First Letter: '%c', Last Letter: '%c'\n", *first, *last);
    }

    // Test case 2
    find_content(s2, &first, &last);
    if (first && last) {
        printf("Second Input: '%s'\n", s2);
        printf("First Letter: '%c', Last Letter: '%c'\n", *first, *last);
    }

    // Test case 3
    find_content(s3, &first, &last);
    if (first && last) {
        printf("Third Input: '%s'\n", s3);
        printf("First Letter: '%c', Last Letter: '%c'\n", *first, *last);
    }

    // Test case 4
    find_content(s4, &first, &last);
    if (first && last) {
        printf("Fourth Input: '%s'\n", s4);
        printf("First Letter: '%c', Last Letter: '%c'\n", *first, *last);
    }

    // Testing for exercise 4
    printf("\nTesting trim function:\n");

    // Test case 1
    trim(s1);
    printf("Trimmed: '%s'\n", s1);

    // Test case 2
    trim(s2);
    printf("Trimmed: '%s'\n", s2);

    // Test case 3
    trim(s3);
    printf("Trimmed: '%s'\n", s3);

    // Test case 4
    trim(s4);
    printf("Trimmed: '%s'\n", s4);

    return 0;
}
