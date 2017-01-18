    int main(){
    
    int i;
    int countP = 0, countN = 0, countZ = 0;
    int array[5];
    
    //calculate which fraction of its elements are positive, negative, and zeroes
   printf("Enter 5 elements into the array number:\n");
    for(i = 0; i < 5; i++){
       scanf("%d",&array[i]);
       if(array[i]> 0)
            countP++;
       else if(array[i] < 0)
            countN++;
       else
            countZ++;
    }
    printf("Positive: %f\n",(float)countP/5);
    printf("Negative: %f\n",(float)countN/5);
    printf("Zero: %f\n",(float)countZ/5);
    return 0;
}
