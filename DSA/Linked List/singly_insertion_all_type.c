#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;

void display() {
   temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert_beginning() {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data you want to insert: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}

void insert_end() {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data you want to insert: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    temp =head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
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
                newnode->next = temp->next;
                temp->next = newnode;
            }
        }
    }
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
    insert_givenLoc();
    display();
    
    return 0;
}
