#include <stdio.h>

void printDiamond(int n) {
    int i, j;
    // Upper part of the diamond
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower part of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for the diamond pattern: ");
    scanf("%d", &n);
    printDiamond(n);
    return 0;
}

/*

Diamond Star Pattern
--------------------


                *
               ***
              *****
             *******
            *********
             *******
              *****
               ***
                *



*/
