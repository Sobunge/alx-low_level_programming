#include <stddef.h>

char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s; // Return a pointer to the first occurrence of c
        }
        s++; // Move to the next character in the string
    }

    // If c is not found, return NULL
    return NULL;
}
