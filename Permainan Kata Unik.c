#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
// Function to compare two strings case-insensitively
int caseInsensitiveCompare(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        if (tolower((unsigned char)*s1) != tolower((unsigned char)*s2)) {
            return 0; // Strings are not the same
        }
        s1++;
        s2++;
    }
    return *s1 == *s2; // Check if both strings end at the same time
}

int main() {
    char s1[100], s2[100];

    // Read the input strings
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // Remove newline characters if they are present
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // Check for IDENTIK
    if (strcmp(s1, s2) == 0) {
        printf("IDENTIK\n");
    }
    // Check for MIRIP
    else if (caseInsensitiveCompare(s1, s2)) {
        printf("MIRIP\n");
    }
    // Otherwise, it is BERBEDA
    else {
        printf("BERBEDA\n");
    }

    return 0;
}
