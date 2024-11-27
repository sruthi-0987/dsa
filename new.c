#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, max;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically for the array
    int *arr = (int*)malloc(n * sizeof(int));

    // Input elements into the array
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max with the first element
    max = arr[0];

    // Find the maximum element
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest number is %d\n", max);

    // Free the allocated memory
    free(arr);

    return 0;
}
