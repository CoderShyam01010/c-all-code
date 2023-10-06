#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*tail,*newnode,*temp;
void create(){
    int choice=1;
    head=0;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0){
           temp= tail=head=newnode;
        }else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        tail=temp;
        printf("do u want to continue?");
        scanf("%d",&choice);
    }
}
void display(){
    struct node *temp;
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void insert_beginning(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter data:");
    scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
}
void insert_end(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter data:");
    scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
}
void insert_givenLoc() {
    int pos, i = 1;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos <= 0) {
        printf("Invalid position\n");
    } else {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data you want to insert: ");
        scanf("%d", &newnode->data);
        temp = head;

        if (pos == 1) {
            newnode->next = temp;
            head = newnode;
        } else {
            while (i < pos - 1 && temp != NULL) {
                 temp = temp->next;
                i++;
            } 

            if (temp == NULL) {
                printf("Invalid position\n");
            } else {
                newnode->prev=temp;
                newnode->next=temp->next;
                temp->next=newnode;
                newnode->next->prev=newnode;
            }
        }
    }
}
int main(){
     create();
    insert_givenLoc();
     display();
    return 0;
}