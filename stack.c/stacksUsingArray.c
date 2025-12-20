#include<stdio.h>

#define MAX 100

     int stack[MAX];
     int top =-1;

void push(int value){
    if(top==MAX -1){
        printf("stack overflow", value);
    } else {
        top++;
        printf("%d pushed elment", value);
    }
}
void pop(){
    if (top==-1){
        printf("stack is empty");


    }else {
        printf("popped element",stack[top]);
        top--;
    }
}
void peek(){
     if (top==-1){
        printf("stack is empty");
     }else {
        printf("top element:",stack[top]);

     }
}
void display(){
     if (top==-1){
        printf("stack is empty");
     }
     printf("stack elements:");
     for(int i=top;i<=top;top++){
        printf("%d",stack[top]);

     }
}
int main(){
    int choice, value;

    while(1){
        printf("stack operations:");
        printf("push");
        printf("pop");
        printf("peek");
        printf("display");
        printf("enter a choice:");
        scanf("%d", choice);
    }
    switch(choice){
        case 1:
        printf("enter value to push");
        scanf("%d", value);
        push(value);
        break;
        case 2:
        pop();
        break;
        case 3:
        peek();
        break;
        case 4:
        display();
        break;


        
    }
    return 0;
}