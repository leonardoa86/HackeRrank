//Starcaise Problem
#include <stdio.h>

int n,row,Colspace,ColStar;

printf("Enter number of rows to be printed\n");
scanf("%d",&n);

for(row = 1; row <= n; row++){
     for(Colspace = 1; Colspace <= n - row; Colspace++){
           printf(" ");
     }
for(ColStar = 1; ColStar <= row; ColStar++){
           printf("* ");
     }
 printf("\n");
  }
getch();
return 0;
}
