//Starcaise Problem
#include <stdio.h>
#include <conio.h>

int n,row,num,space,ncr;

printf("Enter number of rows to be printed\n");
scanf("%d",&row);

for(n = 0 ; n < row ; n++){

    for(space = 1; space < row - n; space++){
        printf(" ");
    }
    for(num = 0; num <= n; num++){

        if(n == 0 || num == 0){
            ncr = 1;
            printf("%d ",ncr);
        }else{
            ncr = ncr * (n-num+1)/num;
            printf("%d ",ncr);
        }
    }
   printf("\n");
}

getch();
return 0;

}
