#include <stdio.h>

int main() {
    int n, factor;

    // Ask for the number of elements first
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Declare the array after reading 'n'
    int arr[n];  // This is a variable-length array (VLA)

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the factor
    printf("Enter the factor: ");
    scanf("%d", &factor);

    // Print the results
    printf("The results are:\n");
    for (int i = 0; i < n; i++) {
        arr[i] *= factor;
        printf("%d ", arr[i]);
    }
    printf("\n");  // New line for better output formatting

    return 0;
}

