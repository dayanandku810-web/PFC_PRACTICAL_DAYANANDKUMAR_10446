#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min, sumEven = 0;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = min = arr[0];

    // Find max, min and sum of even elements
    for (i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];

        if (arr[i] % 2 == 0)
            sumEven += arr[i];
    }

    // Reverse array
    printf("\nReversed Array:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    // Output results
    printf("\n\nMaximum element: %d", max);
    printf("\nMinimum element: %d", min);
    printf("\nSum of even elements: %d", sumEven);

    return 0;
}

/**  output:-
Enter number of elements: 4
Enter array elements:
4
5
5
6

Reversed Array:
6 5 5 4 

Maximum element: 6
Minimum element: 4
Sum of even elements: 10% */