#include<stdio.h>

int main(){
    int arr[10]; 
    double total;
    double sum_1;
    double sum_2;
    for(int i=0;i<10;++i){
    printf("Enter number: ");
    scanf("%d",&arr[i]);
    if(i%2==0){
        sum_1+=arr[i];
    }
    else{
        sum_2+=arr[i]; 
    }
    
      }
      
      
    total=sum_1-sum_2;
   
    printf("\nTotal= %f",total);

    return 0;}
    