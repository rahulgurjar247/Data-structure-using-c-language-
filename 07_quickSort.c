#include<stdio.h>
#include<conio.h>

int partition(int arr[], int first, int last){
     int pivot = arr[first];
     int count = 0;
     for(int i = first+1 ;i<=last;i++){
          if(arr[i]<pivot)
               count++;
     }

     int pivotIndex = first+count ;

     int temp = arr[pivotIndex];
     arr[pivotIndex]= arr[first];
     arr[first] = temp;

     int i =  first , j = last;

     while(i< pivotIndex && j> pivotIndex){
          while( arr[i] < arr[pivotIndex]){
               i++;
          }
          while( arr[j] > arr[pivotIndex]){
               j--;
          }
          if(i < pivotIndex && j> pivotIndex){
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
          }
     }

     return pivotIndex;
}
void quickSort(int arr[] , int first ,int last ){
     if(first>=last){
          return;
     }
     int p = partition(arr,first,last);

     quickSort(arr ,first,p-1);
     quickSort(arr ,p+1,last);
}
void main(){
     int arr[5] ={3,12,2,17,0};
     quickSort(arr,0,4); 

     for(int i =0 ; i< 5; i++){
          printf("%d  ",arr[i]);
     }
}