#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;
void length(){
    int count=0;
    temp=head;
    if(head==0){
        printf("empty linked list");
    }else{
        while(temp!=0){
            count+=1;
            temp=temp->next;
        }
        printf("length is %d",count);
    }
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
  length();
return 0;
}