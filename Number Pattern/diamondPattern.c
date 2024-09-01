#include <stdio.h>

int main() {
    int n, i, j, space, num;

    // Enter the number of rows (height of the diamond)
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    space = n - 1; // Initial space count

    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= space; j++)
            printf(" ");
        
        // Print increasing numbers
        num = 1;
        for (j = 1; j <= i; j++)
            printf("%d", num++);
        
        // Print decreasing numbers
        num -= 2;
        for (j = 1; j < i; j++)
            printf("%d", num--);
        
        printf("\n");
        space--; // Decrease space count for next row
    }

    space = 1; // Reset space count

    // Lower half of the diamond
    for (i = n-1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= space; j++)
            printf(" ");
        
        // Print increasing numbers
        num = 1;
        for (j = 1; j <= i; j++)
            printf("%d", num++);
        
        // Print decreasing numbers
        num -= 2;
        for (j = 1; j < i; j++)
            printf("%d", num--);

        printf("\n");
        space++; // Increase space count for next row
    }

    return 0;
}

/*


                    1
                   121
                  12321
                 1234321
                123454321
                 1234321
                  12321
                   121
                    1


*/
