#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=0;
void push(){
    int choice=1;
    struct node *newnode;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=top;
        top=newnode;
        printf("Do u want to continue(0,1)? ");
        scanf("%d",&choice);
    }
}
void display(){
    struct node *temp;
    temp=top;
    if(top==0){
        printf("Empty stack");
    }else{
        printf("Stack elements are : ");
        while(temp!=0){
            printf(" %d ",temp->data);
            temp=temp->next;
        }
    }
}
void peek(){
    if(top==0) printf("No element in stack");
    else printf("top element is %d\n",top->data);
}
void pop(){
    struct node *temp;
    temp=top;
    if(top==0){
        printf("Empty stack");
    }else{
        printf("Popped element is %d\n",top->data);
        top=top->next;
        free(temp);
    }
}
void main(){
    push();
    peek();
    pop();
    display();
}