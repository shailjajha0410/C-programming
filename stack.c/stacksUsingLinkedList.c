#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *top= NULL;

void push(int data){
    struct Node*newnode;
   struct Node *newnode= (struct Node*)malloc(sizeof(struct Node));
   if (newnode == 0){
    printf("stack overflow");
    return;
   }
   newnode->next= data;
   newnode->next = top;
   top = newnode;
}
void pop(){
    struct Node*temp;
    temp= top;
    if(top==NULL){
        printf("stack is empty");
    }
    else{
        top=top->next;
        free(temp);
    }

}
void display(){
    struct Node*temp;
    top=temp;
    if(top==NULL){
        printf("stack is empty");
    }
    else{
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }

}



