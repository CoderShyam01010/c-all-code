#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    newnode->data=x;
    if(front== 0 && rear==0 ){
        front=rear=newnode;
    }else{
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue(){
    struct node *temp;
    temp=front;
    if(front==0 && rear==0){
        printf("underflow condition");
    }else{
        printf("Dequeued element is %d \n",front->data);
        front=front->next;
        free(temp);
    }
}
void display(){
    struct node *temp;
    if(front==0 && rear==0){
        printf("underflow condition");
    }else{
        temp=front;
        while(temp!=0){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void peek(){
    if(front==0 && rear==0){
        printf("underflow condition");
    }else{
    printf("peek element is %d\n",front->data);
}
}
void main(){
    enqueue(2);
    enqueue(3);
    enqueue(4);
    peek();
    display();
    dequeue();
    peek();
    display();

}
