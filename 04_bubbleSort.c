#include<stdio.h>
#include<conio.h>

void BubbleSort(int arr[],int size){
     for(int i=0;i<size ;i++){
          for(int j=0 ; j<size-i-1;j++){
               if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
               }
          }
     }
     return;
}

void main(){
     int arr[7] = {5,3,2,9,12,8,0};
     BubbleSort(arr,7);
     for(int i=0;i<7;i++){
          printf("%d \n",arr[i]);
     }

}