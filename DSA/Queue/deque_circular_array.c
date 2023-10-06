#include<stdio.h>
# define N 5
int deque[N];
int front=-1;
int rear=-1;
void enqueue_front(int x){
    if((rear+1)%N==front){
        printf("Overflow condition\n");
    }else if(front==-1 && rear==-1){
        front=rear=0;
        deque[front]=x;
    }else if(front==0){
        front=N-1;
        deque[front]=x;
    }else{
        front--;
        deque[front]=x;
    }
}
void enqueue_rear(int x){
     if((rear+1)%N==front){
        printf("Overflow condition\n");
    }else if(front==-1 && rear==-1){
        front=rear=0;
        deque[rear]=x;
    }else if(rear==N-1){
        rear=0;
        deque[rear]=x;
    }else{
        rear++;
        deque[rear]=x;
    }
}
void dequeue_front(){
    if(front==-1 && rear==-1){
        printf("deque is empty\n");
    }else if(front==rear){
        front=rear=-1;
    }else if(front==N-1){
        printf("dequeued element is %d\n",deque[front]);
        front=0;
    }else{
        printf("dequeued element is %d\n",deque[front]);
        front++;
    }
}
void dequeue_rear(){
     if(front==-1 && rear==-1){
        printf("deque is empty\n");
    }else if(front==rear){
        front=rear=-1;
    }else if(rear==0){
        printf("dequeued element is %d\n",deque[rear]);
        rear=N-1;
    }else{
        printf("dequeued element is %d\n",deque[rear]);
        rear--;
    }
}
void display(){
    int i=front;
    printf("deque elements are: ");
    while(i != rear){
        printf("%d ",deque[i]);
        i=(i+1)%N;
    }
    printf("\n");
}
void main(){
    enqueue_front(1);
    enqueue_front(2);
    enqueue_rear(3);
    enqueue_front(4);
    enqueue_rear(5);
    display();
    dequeue_rear();
    display();
    dequeue_front();
    display();
}