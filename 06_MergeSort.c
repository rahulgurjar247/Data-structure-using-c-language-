#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void merge(int *arr,int  first , int last){
     int mid  = first + (last-first)/2;

     int len1 = mid-first+1;
     int len2  = last -mid ;

     int * arr1 = (int *) malloc(sizeof(len1));
     int * arr2 = (int *) malloc(sizeof(len2));

     int k = first;
     for(int i=0;i<len1 ; i++){
          arr1[i] = arr[k++];
     }

     k = mid+1;
     for(int i=0;i<len2 ; i++){
          arr2[i] = arr[k++];
     }

     k= first;
     int index1 = 0;
     int index2 = 0;

     while(index1 < len1 && index2 <len2){
          if(arr1[index1]<arr2[index2]){
               arr[k++] = arr1[index1++];
          }else{
               arr[k++] = arr2[index2++];
          }
     }

     while(index1<len1){
          arr[k++] = arr1[index1++];
     }    
     while(index1<len1){
          arr[k++] = arr2[index2++];
     }    


     free(arr1);
     free(arr2);



}


void mergeSort(int arr[],int first ,int last){
     if(first>=last){
          return;
     }
     int mid = first + (last-first)/2;
     mergeSort(arr,first,mid);
     mergeSort(arr , mid+1 , last);

     merge(arr , first ,last);

}

void main(){
     int arr[7] = {5,3,2,9,12,8,0};
     mergeSort(arr,0,6);
     for(int i=0;i<7;i++){
          printf("%d  ",arr[i]);
     }

     return;

}