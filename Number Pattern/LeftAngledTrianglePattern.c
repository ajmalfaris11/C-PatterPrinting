#include <stdio.h>

int main() {
    int i, j, n, num = 1;

    // Get the number of rows for the pattern
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print numbers in ascending order
        for (j = 1; j <= i; j++) {
            printf("%d", num++);
        }
        // Move to the next line4
        printf("\n");
    }

    return 0;
}

/*


Left-Aligned Number Pyramid
---------------------------

                   1

                   2 3

                   4 5 6

                   7 8 9 10

                   11 12 13 14 15


*/