#include <stdio.h>

struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int x){
    struct node*newnode;
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->next=x;
    newnode->next=NULL;
    
    if (front==0, rear==0){
    front=rear=newnode;
    }else{
        rear->next=newnode;
        rear=newnode;
    } 
}
void dequeue(){
    struct node*temp;
    front=temp;
    if(front==NULL){
        printf("queue is empty");
    } else{
        front=front->next;
        free(temp);
    }
}
void display(){
    struct node*temp;
    front=temp;
    if(front==NULL){
        printf("queue is empty");
    } else{
        temp=front;
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
 int main(){
    int choice, x;


    return 0;
)
