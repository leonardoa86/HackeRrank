#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, k, j;

    printf("Enter number of rows\n");
    scanf("%d",&n);

    for ( i = 0 ; i < n ; i++ )
    {
        //Top part of the triangle
        for( j = 0 ; j < n-i-1 ; j++ )
            printf("-");
        //Bottom part of the triangle
        for(k = 0 ; k < i; k++ ){
            printf("*");
        }
    printf("\n");
    }
    getch();
    return 0;
}
