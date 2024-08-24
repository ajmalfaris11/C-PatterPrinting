#include <stdio.h>

int main() {
    int n = 5; // Size of the square
    for(int i = 0; i < n; i++) {  // Loop for each row
        for(int j = 0; j < n; j++) {  // Loop for each column
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*

        * * * * * 
        * * * * * 
        * * * * * 
        * * * * * 
        * * * * * 

*/