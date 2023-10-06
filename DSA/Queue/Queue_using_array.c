#include<stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x){
    if(rear==N-1){
        printf("Overflow condition\n");
    }else if(front==-1 && rear==-1){
        rear=front=0;
        queue[rear]=x;
    }else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("empty queue , underflow condition\n");
    }else if(front==rear){
        front=rear=-1;
    }else{
        printf("dequeued element is %d\n",queue[front]);
        front++;
    }
}
void display(){
    int i;
    printf("Queue elements are: ");
    for(i=front;i<rear+1;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
/*void display(){
    int i=front;
    while(i<rear+1){
        printf("%d ",queue[i]);
        i++;
    }
    printf("\n");
}*/
void peek(){
     if(front==-1 && rear==-1){
        printf("empty queue , underflow condition\n");
    }else{
        printf("peeek element is %d\n",queue[front]);
    }
}
void main(){
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    peek();
    display();
    dequeue();
    peek();
    display();

}