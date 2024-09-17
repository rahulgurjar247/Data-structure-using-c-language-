#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
     int data;
     struct node *next , *prew;
};

struct node *head = NULL ;
struct node *ptr , *temp;

void insertE(){
     int data ;
     ptr = (struct node *)malloc(sizeof(struct node));
     printf("Enter data to Enter in Node:");
     scanf("%d",&data);

     ptr->data = data;
     ptr->next = NULL;
     ptr->prew = NULL;


     temp = head;
     if(head == NULL){
          head= ptr ;
          return ;          
     }else{
          while(temp->next != NULL ){
               temp = temp->next;
          }
          temp->next= ptr;
          ptr->prew = temp ;
          printf("node insertted");
     }
}

void insertF(){
     ptr = (struct node *)malloc(sizeof(struct node));
     printf("Enter data to Enter in Node:");
     scanf("%d",&ptr->data);
     ptr->next = NULL;
     ptr->prew = NULL;

     temp = head ;
     if(temp == NULL) {
          head= ptr;
          return;
     }else{
          ptr->next = head;
          head->prew = ptr ;
          head = ptr;
     }
}
 
 

void insertM(){
     int n;
     ptr = (struct node *)malloc(sizeof(struct node));
     printf("\nEnter data to Enter in Node:");
     scanf("%d",&ptr->data);
     ptr->next = NULL;
     ptr->prew = NULL;

     printf("\nwhere to insert node");
     scanf("%d",&n);

     temp = head ;
     if(temp == NULL) {
          head= ptr;
          return;
     }else{
          while(temp != NULL && temp->data != n){
               temp = temp->next ;
          }
          if(temp == NULL){
               printf("bro value not exit");
          }else{
               ptr->next =  temp->next;
               ptr->prew = temp ;
               temp->next = ptr ;
               ptr->next->prew  = ptr;
          }
     }
}


void display(){
     temp = head ;
     while(temp!= NULL){
          printf("%d->",temp->data);
          temp = temp->next;
     }
}

void displayBackword(){
     temp = head ;
     while(temp->next != NULL){
          temp = temp->next;
     }
     while(temp->prew != NULL){
          printf("%d ->",temp->data);
          temp = temp->prew ; 
     }
      
}

void deleteM(){
     int n;
     printf("which node to delete:");
     scanf("%d",&n);

     if(head == NULL){
          printf("\n Empty linklist");
          return;
     }else{
          temp = head ;
          while(temp != NULL && temp->next->data != n){
               temp = temp->next ;
          }
          if(temp == NULL){
               printf("bro value not exit");
          }else{
               temp->next = temp->next->next;
          }
     }
}

void main(){
     int op;
     while(1){
          printf("\nSelect\n InsertL-1 \n insertM-2 \n insertF-3 \n delete-6 \n display()-4 \n exit-5 \n Enter : ");
          scanf("%d",&op);
          if(op >= 0 && op <=9  ){
               switch(op){
               case 1 : insertE();break;
               case 2 : insertM();break;
               case 3 : insertF();break;
               case 6 : deleteM();break;
               case 4 : display(); break;
               case 5 : exit(1);
               defualt : printf("invalid command"); break ;
               }
          }else{
               printf("invlaid commnad");
               break;
          }

     }

     getch();
}