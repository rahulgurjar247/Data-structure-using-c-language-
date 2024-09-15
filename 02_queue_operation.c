#include<stdio.h>
#include<conio.h>
#define max 3
int arr[max];
int front = -1;
int rear = -1;

void enqueue(int num){
     if(rear ==  max-1){
          printf("queue is full \n");
          return;
     }
     if(front == -1 && rear == -1){
          front++;
          rear++;
          arr[rear] = num;
          return;
     }
     arr[++rear] = num;
}

void dequeue(){
     if(front >rear || rear == -1 ){
          printf("queue in empty \n");          
     }else{
          printf("deleted element is %d \n",arr[front]);
          front++;
     }
}   

int top(){
     if(front >rear || rear == -1){
          printf("empty queue\n ");
          return -1;
     }
     return arr[front];
}
void main(){
     enqueue(1);
     enqueue(2);
     enqueue(3);
     enqueue(4);
     dequeue();
     dequeue();
     dequeue();
     dequeue();
     int t =top();     
     printf("top element is %d",t );
}
