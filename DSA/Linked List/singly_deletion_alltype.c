#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;
void display() {
   temp = head;
    while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void delete_beginning(){
    if(head==0){
        printf("empty node");
    }else{
         head=head->next;
    }
}
void delete_end(){
    struct node *prevnote;
    temp=head;
    while(temp->next !=0){
        prevnote=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=0;
    }else{
        prevnote->next=0;
    }
    free(temp);
}
void delete_givenLoc(){
    struct node *nextnode;
    int pos,i=1;
    temp=head;
    printf("enter position you want to delete: ");
    scanf("%d",&pos);
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}
int main() {
    head = 0;
    int choice = 1;
    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue (0,1)? ");
        scanf("%d", &choice);
    }
    delete_beginning();
    display();
    
    return 0;
}