#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,d1=0,i,j,d2=0,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }   
    for(i=0;i<n;i++)   
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
             d1=d1+a[i][j]; 
        }   
    }
    for(i=0;i<n;i++)   
     {
         for(j=0;j<n;j++)
         {
             if(i==n-j-1)
             d2=d2+a[i][j];
         }
    }
    sum=d1-d2;
    printf("%d",abs(sum));
    return 0;
}
