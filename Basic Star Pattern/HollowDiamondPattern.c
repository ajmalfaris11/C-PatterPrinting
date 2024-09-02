#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper part of the diamond
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*

             Hollow Diamond Pattern
            ------------------------


                        *
                       * *
                      *   *
                     *     *
                    *       *
                     *     *
                      *   *
                       * *
                        *



*/