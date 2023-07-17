#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int freq[MAX_SIZE] = {0};
    int size, i;
    int duplicateCount = 0;

    printf("Enter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Count the frequency of each element in the array
    for (i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Count the number of duplicate elements
    for (i = 0; i < size; i++) {
        if (freq[arr[i]] > 1) {
            duplicateCount++;
            freq[arr[i]] = -1; // Mark as counted
        }
    }

    // Display the total number of duplicate elements
    printf("Total number of duplicate elements: %d\n", duplicateCount);

    // Display the frequency of all elements
    printf("Element\tFrequency\n");
    for (i = 0; i < size; i++) {
        if (freq[arr[i]] != -1) {
            printf("%d\t%d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = -1; // Mark as printed
        }
    }

    return 0;
}
