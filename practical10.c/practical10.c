#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[10][10];
    int max, min;
    int diagSum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = min = arr[0][0];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (arr[i][j] > max)
                max = arr[i][j];

            if (arr[i][j] < min)
                min = arr[i][j];

            if (i == j)
                diagSum += arr[i][j];
        }
    }

    printf("\nRow-wise sum:\n");
    for (i = 0; i < r; i++) {
        int rowSum = 0;
        for (j = 0; j < c; j++) {
            rowSum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    printf("\nMaximum element: %d", max);
    printf("\nMinimum element: %d", min);
    printf("\nSum of diagonal elements: %d", diagSum);

    return 0;
}
/* Output:-
Enter number of rows and columns: 4
5
Enter elements of the matrix:
3
2
4
3
4
3
2
4
5
4
2
4
5
5
5
555
5

5
5


5

Row-wise sum:
Sum of row 1 = 16
Sum of row 2 = 18
Sum of row 3 = 21
Sum of row 4 = 575

Maximum element: 555
Minimum element: 2
Sum of diagonal elements: 15%                                   */