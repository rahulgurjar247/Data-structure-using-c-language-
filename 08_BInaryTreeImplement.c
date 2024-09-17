#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
     int data;
     struct node *lptr , *rptr;
};
struct node *root = NULL;

void create(){
     int data;
     struct node *n , *ptr , *t=root;
     n = (struct node *)malloc(sizeof(struct node));
     printf("Enter Data");
     scanf("%d",&data);
     n->data = data ;
     n->lptr = NULL ;
     n->rptr = NULL ;
     if(root == NULL){
          root = n;
     }else{
          while(t!= NULL && t->data != data){
               ptr = t ;
               if(t->data == data){
                    printf("Already insert");
                    return ;
               }
               if(data < t->data){
                    t = t->lptr ;
               }else{
                    t = t->rptr;
               }

          }
          if(data < ptr->data){
                    ptr -> lptr = n ;
          }else{
               ptr -> rptr = n ;
          }
          
     }
}
void inorder(struct node *temp){
     if(temp == NULL)
          return;

     inorder(temp->lptr);
     printf("%d ->",temp->data);
     inorder(temp->rptr);
}
void preOrder(struct node *temp){
     if(temp == NULL)
          return ;

     printf("%d ->",temp->data);
     preOrder(temp->lptr) ;
     preOrder(temp->rptr) ;
}

void postOrder(struct node *temp){
     if(temp == NULL)
          return ;

     postOrder(temp->lptr) ;
     postOrder(temp->rptr) ;
     printf("%d ->",temp->data);
}
void main(){
     int op;
     while(1){
          printf("Select\n create-1 \n inorder-2 \n preorder-3 \n postorder-4 \n exit-5 \n Enter : ");
          scanf("%d",&op);

          switch(op){
               case 1 : create();break;
               case 2 : inorder(root);break;
               case 3 : preOrder(root);break;
               case 4 : postOrder(root);break;

               case 5 : exit(1);
          }
     }

     getch();
}