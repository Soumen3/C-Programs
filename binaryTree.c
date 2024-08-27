//#include<stdio.h>
//
//struct node{
//    int data;
//    struct node *left, *right;
//};
//struct node* createNode(){
//    struct node* newNode = malloc(sizeof(struct node));
//    printf("\nEnter the data:\t");
//    scanf("%d",&newNode->data);
//    newNode->left=NULL;
//    newNode->right=NULL;
//    return newNode;
//
//}
//
//void insertLeft(struct node *New){
//    New->left=createNode();
//    printf("\nData inserted in the left of %d\n",New->data);
//    //return New->left;
//}
//void insertRight(struct node *New){
//    New->right=createNode();
//    printf("\nData inserted in the right of %d\n",New->data);
//   // return New->right;
//}
//
//void preOrderTraversal (struct node *root){
//    if(root == NULL)
//        return;
//    printf("%d -> ",root->data);
//    preOrderTraversal(root->left);
//    preOrderTraversal(root->right);
//
//}
//
//void inOrderTraversal(struct node *root){
//    if(root== NULL)
//        return;
//    inOrderTraversal(root->left);
//    printf("%d -> ",root->data);
//    inOrderTraversal(root->right);
//}
//
//void postOrderTraversal(struct node *root){
//    if(root==NULL)
//        return;
//    postOrderTraversal(root->left);
//    postOrderTraversal(root->right);
//    printf("%d -> ",root->data);
//}
//
//void main(){
//    struct node *root=createNode();
//    printf("\nThe root node is created\n");
//    insertLeft(root);
//    insertRight(root);
//    insertLeft(root->left);
//    insertRight(root->right);
//    printf("Preorder Traversal\n");
//    preOrderTraversal(root);
//    printf("\nPostorder Traversal\n");
//    postOrderTraversal(root);
//    printf("\nInorder Traversal\n");
//    inOrderTraversal(root);
//}



//for practice
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left, *right;
}Node;

Node* CreateNode(){
    Node* NewNode= malloc(sizeof(Node));
    printf("\nEnter the data:\t");
    scanf("%d",&NewNode->data);
    NewNode->right=NewNode->left=NULL;
    return NewNode;
}

void insertLeft(Node *New){
    New->left=CreateNode();
    printf("Data inserted in the left of %d",New->data);
}

void insertRight(Node *New){
    New->right=CreateNode();
    printf("Data inserted in the right of %d",New->data);
}

void preOrderTraversal(Node *root){
    if(root==NULL)
        return;
    printf("%d->",root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root){
    if(root==NULL)
        return;
    inOrderTraversal(root->left);
    printf("%d->",root->data);
    inOrderTraversal(root->right);

}

void postOrderTraversal(Node *root){
    if(root==NULL)
        return;
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
    printf("%d->",root->data);
}

void main(){
    Node *root=CreateNode();

    insertLeft(root);
    insertRight(root);
    printf("In-order Traversal:\n");
    inOrderTraversal(root);
    printf("Pre-order Traversal:\n");
    preOrderTraversal(root);
    printf("Post-Order Traversal:\n");
    postOrderTraversal(root);

}
