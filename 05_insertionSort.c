#include<stdio.h>
#include<conio.h>

void insertionSort(int arr[],int size){
    for(int i=1 ;i<size ;i++){
          int j=i-1;
          int temp = arr[i];
          while(j>=0){
               if(arr[j]>temp){
                    arr[j+1] =arr[j];
               }else{
                    break;
               }        
               j--;
          }
          arr[j+1] = temp;
    }
     return;
}

void main(){
     int arr[7] = {5,3,2,9,12,8,0};
     insertionSort(arr,7);
     for(int i=0;i<7;i++){
          printf("%d \n",arr[i]);
     }

}