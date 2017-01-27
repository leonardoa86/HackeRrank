/*Given five positive integers, find the minimum and maximum values that can be calculated 
by summing exactly four of the five integers. Then print the respective minimum and maximum
values as a single line of two space-separated long integers.*/

#include <stdio.h>

int main(){
    
    int i,j,temp;
    long int sum = 0, maxsum = 0, minsum = 0;
    long int arr[5];
    
    for(i=0;i<5;i++)
        scanf("%ld",&arr[i]);
    
    for(i = 0; i < 5 ; i++){
        for(j = i + 1 ; j < 5 ; j++){
            if(arr[j] < arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }  
    }
    for(i = 0 ; i < 4 ; i++)
        minsum = minsum + arr[i];
    for(i = 1 ; i < 5 ; i++)
        maxsum = maxsum + arr[i];
    printf("%ld\t%ld",minsum,maxsum);
    return 0;
}

