#include <conio.h>
#include <stdio.h>

int row,colSpace,colSymbol,n;
 printf("Enter number of rows to be printed\n");
 printf("Enter and odd number\n");
 scanf("%d",&n);
 int totalRows  = n;
 //Upper triangle
  for (row = 1; row <= totalRows; row++){
      for(colSpace = totalRows - row; colSpace >= 1; colSpace--){
           printf(" ");
     }
 for(colSymbol = 1; colSymbol <= (2* row)-1 ; colSymbol++){
         printf("#");
 }
      printf("\n");
 }
 //Lower triangle
 for(row = totalRows-1; row >= 1; row--){
     for(colSpace = 1;colSpace <= totalRows-row; colSpace++){
         printf(" ");
     }
     for(colSymbol = 1; colSymbol <= (2* row)-1 ; colSymbol++){
         printf("#");
     }
     printf("\n");
 }
 getch();
 return 0;
