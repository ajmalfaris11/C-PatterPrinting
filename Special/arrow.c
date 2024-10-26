

#include<stdio.h>
#include<conio.h>
int main( ) {   //main function



int i,j,k,l,lmt=5,m;

printf("\n\n\n\n");
for(i=0;i<=lmt;i++)
{
  
  
    printf ("                               ");
for(j=lmt;j>=i;j--)
{
printf("   ");   //print one space
}
for(k=0;k<=i;k++)
{
printf("*");  //print one star

}
if (k==lmt || k==lmt-1){
   printf("                                           +   *   *    + ");
}

if (k==lmt+1){
printf ("-----------------------------------------------|----|----|");
 }
 
  printf("\n");

}
for(i=1; i<=lmt; i++){
     printf ("                               ");
    for (j=0;j<=i;j++){
        printf("   ");
       
    }
     for (j=i ; j<=lmt ;j++){
           printf("*");
       }
  if (i== 1 || i==2){
    
   printf("                                           +   *   *    + ");
  }
       printf("\n");

}
}


/*
-----------------------
======= OUT PUT =======
-----------------------

                                        *
                                      **
                                   ***
                                ****                                           +   *   *    +
                            *****                                           +   *   *    +
                          ******-----------------------------------------------|----|----|
                             *****                                           +   *   *    +
                                ****                                           +   *   *    +
                                   ***
                                      **
                                         *

*/
  

