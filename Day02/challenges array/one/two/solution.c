#include <stdio.h>

int main() {
    int n;

    // Ask for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    // Ask for the elements of the array
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Display the elements of the array
    printf("The elements of the array are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
