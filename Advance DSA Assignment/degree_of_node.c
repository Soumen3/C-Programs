
#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;

// Function to create a new node
Node *createNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to insert nodes into the binary tree
Node *insertNode(Node *root, int data)
{
    // If the tree is empty, assign a new node address to the root
    if (root == NULL)
    {
        root = createNode(data);
    }
    // Else, decide to go left or right
    else if (data < root->data)
    {
        // It's lesser, so go left
        root->left = insertNode(root->left, data);
    }
    else
    {
        // It's greater or equal, so go right
        root->right = insertNode(root->right, data);
    }
    return root;
}

int get_degree(Node *root, int value)
{
    Node* temp= root;
    if (root==NULL){
        printf("\nThe tree is empty...\n");
        return -1;
    }
    while( temp != NULL && temp->data != value){
        if(temp->data > value)
            temp=temp->left;
        else
            temp=temp->right;
    }
    if (temp==NULL){
        printf("The node is not found...");
        return -1;
    }
    else{
        if(temp->left ==NULL && temp->right == NULL)
            return 0;
        else if((temp->left !=NULL && temp->right != NULL) )
            return 2;
        else return 1;
    }
}

int main()
{
    Node *root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
    insertNode(root, 75);
    insertNode(root, 90);


    int degree= get_degree(root, 50);
    if (degree != -1)
        printf("The degree is: %d", degree);

    return 0;
}

