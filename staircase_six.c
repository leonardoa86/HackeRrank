#include <stdio.h>
#include <conio.h>

int factorial(int n){
   if(n == 1 || n == 0){
        return 1;
   }
   return n*factorial(n-1);
}
int nRc(int n, int k){
    return factorial(n)/(factorial(k)*factorial(n-k)); // n!/r!(n-r)!
}
int main()
{
    int i,j,row,num;

    printf("Enter number of rows to be printed\n");
    scanf("%d",&row);

    for(i = 0 ; i < row ; i++){
       for(j = 0; j <= row - i ; j++){ // or  for(j = row-i; j > 0; j--){
            printf(" ");
        }
        for(num = 0; num <= i; num++){
            printf("%d ",nRc(i,num));
        }
       printf("\n");
    }
    getch();
    return 0;
}
