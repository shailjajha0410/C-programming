#include <stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x){
if(rear==N-1){
    printf("queue overflow");
} else if (front == -1,rear == -1){
    front=rear=0;
    queue[rear]=x;
}else {
    rear++;
    queue[rear]=x;
}
}
void dequeue(){
    if (front=-1, rear=-1){
    printf("queue is empty");
    }else{
        printf("%d",queue[front]);
        front++;
    }
}
void peek(){
    if (front=-1, rear=-1){
    printf("queue is empty");
    }else{
        printf("front element",queue[front]);
    }
}
void display(){
    if (front=-1, rear=-1){
    printf("queue is empty");
    }else {
        printf("queue elements");
        for(int i= front;i<=rear;i++){
            printf("%d",queue[i]);
        }
    }
}
 int main(){
    int choice, value;
 


return 0; 
}
