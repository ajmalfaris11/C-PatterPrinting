#include <stdio.h>  // Include standard input-output library

int main() {
    int i, j, n;  // Declare variables for loop counters and the number of rows

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);  // Read the input value for 'n'

    // Outer loop to handle the number of rows
    for(i = 1; i <= n; i++) {
        // Inner loop to print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d ", j);  // Print numbers from 1 to the current row number
        }
        printf("\n");  // Move to the next line after printing each row
    }

    return 0;  // Return 0 to indicate successful completion of the program
}

/*

Right Angled Triangle Pattern 
-----------------------------


            1 

            1  2 

            1  2  3 

            1  2  3  4 
            
            1  2  3  4  5 



*/