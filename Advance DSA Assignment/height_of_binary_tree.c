
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

// Function to print the binary tree
void printTree(Node *root)
{
    // Base case: root is null
    if (root == NULL)
    {
        return;
    }
    // First print the left subtree
    printTree(root->left);
    // Then print the data
    printf("%d ", root->data);
    // Now print the right subtree
    printTree(root->right);
}
int get_height(Node *root)
{
    if (root == NULL)
        return 0;
    else if (root->left == NULL && root->right == NULL)
        return 1;
    int height_of_left_subtree = 1 + get_height(root->left);
    int height_of_right_subtree = 1 + get_height(root->right);

    return height_of_left_subtree > height_of_right_subtree ? height_of_left_subtree : height_of_right_subtree;
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

    printf("Binary tree: ");
    printTree(root);
    printf("\nThe height of the tree is: %d", get_height(root));

    return 0;
}
