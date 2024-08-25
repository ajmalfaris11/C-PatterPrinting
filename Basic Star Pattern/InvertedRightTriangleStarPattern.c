#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    for(int i = n; i >= 1; i--) {  // Loop for each row
        for(int j = 1; j <= i; j++) {  // Loop for each column in the row
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}




/*

out-put :-

  Inverted Right Triangle Star Pattern
  ------------------------------------ 
   

            * * * * * 
            * * * * 
            * * * 
            * * 
            * 



*/