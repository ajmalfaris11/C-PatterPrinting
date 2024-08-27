#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    for(int i = n; i >= 1; i--) {  // Loop for each row, starting from n and decreasing
        for(int j = 1; j <= n - i; j++) {  // Print spaces for alignment
            printf("  ");
        }
        for(int k = 1; k <= i; k++) {  // Print asterisks in decreasing order
            printf("* ");
        }
        for(int l = i - 1; l >= 1; l--) {  // Print asterisks in decreasing order
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}


/*

Out Put :-


                * * * * * * * * * 
                  * * * * * * * 
                    * * * * * 
                      * * * 
                        * 


*/