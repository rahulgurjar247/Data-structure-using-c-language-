#include <stdio.h>
#include <conio.h>
#define max 100
int stack[max];
int topIndex = -1;

void push(int num)
{
     if (topIndex == max - 1)
     {
          printf("stack is full");
          return;
     }
     printf("push:%d \n", num);
     stack[++topIndex] = num;
}
void pop()
{
     if (topIndex == -1)
     {
          printf("\nstack underflow ");
          return;
     }
     printf("pop :%d \n", stack[topIndex]);
     stack[topIndex--];
}

int top()
{
     if (topIndex == -1)
     {
          printf("stack underflow\n ");
          return -1;
     }
     return stack[topIndex];
}
void main()
{
     push(200);
     push(400);
     push(500);
     pop();
     push(400);
     pop();
     pop();
     pop();
     int t = top();
     printf("top : %d\n", t);

     return;
}