#include <stdio.h>
#include <stdlib.h>

//  ure for a node in AVL tree
typedef  struct Node {
    int data;
      struct Node* left;
      struct Node* right;
    int height;
}Node;

// Function to get the height of a node
int height(  Node* node) {
    if (node == NULL) {
        return 0;
    }
    return node->height;
}

// Function to calculate the balance factor of a node
int balanceFactor(  Node* node) {
    if (node == NULL) {
        return 0;
    }
    return height(node->left) - height(node->right);
}

// Function to perform a right rotation
  Node* rightRotate(  Node* y) {
      Node* x = y->left;
      Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = 1 + (height(y->left) > height(y->right) ? height(y->left) : height(y->right));
    x->height = 1 + (height(x->left) > height(x->right) ? height(x->left) : height(x->right));

    // Return new root
    return x;
}

// Function to perform a left rotation
  Node* leftRotate(  Node* x) {
      Node* y = x->right;
      Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = 1 + (height(x->left) > height(x->right) ? height(x->left) : height(x->right));
    y->height = 1 + (height(y->left) > height(y->right) ? height(y->left) : height(y->right));

    // Return new root
    return y;
}

// Function to create a new node
  Node* newNode(int data) {
      Node* node = (  Node*)malloc(sizeof(  Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

// Function to perform insertion in AVL tree
  Node* insert(  Node* node, int data) {
    // Perform normal BST insertion
    if (node == NULL) {
        return newNode(data);
    }

    if (data < node->data) {
        node->left = insert(node->left, data);
    } else if (data > node->data) {
        node->right = insert(node->right, data);
    } else {
        // Duplicate keys not allowed
        return node;
    }

    // Update height of this ancestor node
    node->height = 1 + (height(node->left) > height(node->right) ? height(node->left) : height(node->right));

    // Get the balance factor to check whether this node became unbalanced
    int balance = balanceFactor(node);

    // If this node becomes unbalanced, there are four cases

    // Left Left Case
    if (balance > 1 && data < node->left->data) {
        return rightRotate(node);
    }

    // Right Right Case
    if (balance < -1 && data > node->right->data) {
        return leftRotate(node);
    }

    // Left Right Case
    if (balance > 1 && data > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && data < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    // If the node is already balanced, return the unchanged node
    return node;
}

// Function to print the AVL tree (in-order traversal)
void inorder(  Node* node) {
    if (node == NULL) {
        return;
    }
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}

int main() {
      Node* root = NULL;

    // Insert some elements into AVL tree
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    // Print AVL tree (in-order traversal)
    printf("AVL tree after insertion: ");
    inorder(root);
    printf("\n");

    return 0;
}
