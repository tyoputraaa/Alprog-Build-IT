#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    
    // Read the number of integers
    scanf("%d", &n);

    int *numbers = (int*)malloc(n * sizeof(int)); // Allocate memory for the numbers

    // Read the integers
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort the numbers
    qsort(numbers, n, sizeof(int), compare);

    // Print the sorted numbers
    for (int i = 0; i < n; i++) {
        printf("%d\n", numbers[i]);
    }

    // Free allocated memory
    free(numbers);

    return 0;
}

