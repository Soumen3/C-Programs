#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left, *right;
} Node;
Node *create_node(int data){
    Node *created_node= (Node*)malloc(sizeof(Node));
    created_node->data=data;
    created_node->left=NULL;
    created_node->right=NULL;

    return created_node;
}
Node* insert_node(Node* root, int data){
    Node* new_node=create_node(data);
    if (root==NULL){
        root=new_node;
    }
    else{
        Node* temp=root;
        while (temp != NULL){
            if(data < temp->data){
                if(temp->left == NULL){
                    temp->left=new_node;
                    break;
                }
                temp=temp->left;
            }
            else{
                if(temp->right == NULL){
                    temp->right=new_node;
                    break;
                }
                temp=temp->right;

            }
        }
    }

    return root;
}


// Function to print the tree level-wise
void printLevelOrder(Node* root) {
    // Base case
    if (root == NULL) return;

    // Create a queue and enqueue root
    Node* queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;

    while (front != rear) {
        // Dequeue a node and print it
        Node* node = queue[front++];
        printf("%d ", node->data);

        // Enqueue left child
        if (node->left != NULL)
            queue[rear++] = node->left;

        // Enqueue right child
        if (node->right != NULL)
            queue[rear++] = node->right;
    }
    printf("\n");
}

int main(){

    Node *root= NULL;
    printf("1. For insert in the tree.\n");
    printf("2. For print the node level wise.\n");
    printf("0. Quit.\n\n");

    int ch, data;
    do{
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            printf("Enter the data: ");
            scanf("%d",&data);
            root= insert_node(root,data);
            break;
        case 2:
            printf("The elements level wise:\n");
            printLevelOrder(root);
            break;
        case 0:
            printf("Thank You!");
            break;
        default:
            printf("Enter valid data.\n");
        }
    }while(ch!=0);

    return 0;
}
