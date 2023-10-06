#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node *root;
struct node *create(){
    int x;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter data[-1 for no node]: ");
scanf("%d",&x);
if(x==-1){
    return 0;
}
newnode->data=x;
printf("Enter left child: ");
newnode->left=create();
printf("Enter right child: ");
newnode->right=create();
return newnode;
}
void preorder(struct node *root){
    if(root==0){
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root){
    if(root==0){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);

}
void postorder(struct node *root)
{
    if(root==0){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void main(){
    
    root=0;
    root=create();
    printf("preorder is : ");
    preorder(root);
    printf("\n"); 
     printf("inorder is : ");
    inorder(root);
    printf("\n"); 
     printf("postorder is : ");
    postorder(root);
    printf("\n");  
}