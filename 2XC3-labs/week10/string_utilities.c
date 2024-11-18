#include "string_utilities.h"
#include <stddef.h>
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
