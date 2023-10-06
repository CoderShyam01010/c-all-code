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
/*void reverse() {
    struct node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while (nextnode != 0) {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode; // Update the head pointer to the new head
}*/
//we can write this reverse function by shortening the variables
void reverse() {
    struct node *s1, *s2, *s3;
    s1 = 0;
    s2 = s3 = head;
    while (s3 != 0) {
        s3 = s3->next;
        s2->next = s1;
        s1 = s2;
        s2 = s3;
    }
    head = s1; // Update the head pointer to the new head
}

int main() {
    head = NULL;
    int choice = 1;
    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue (0,1)? ");
        scanf("%d", &choice);
    }
    reverse();
    display();
    return 0;
}
