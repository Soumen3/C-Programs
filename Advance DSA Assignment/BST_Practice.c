#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left, *right;
} Node;

Node* create_node(int data){
    Node* newNode= (Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

Node* insert_node(Node* root, int data){
    Node* newNode= create_node(data);
    if (root==NULL){
        root=newNode;
    }
    else{
        Node* temp= root;
        while(temp!=NULL){
            if(data > temp->data){
                if(temp->right==NULL){
                    temp->right=newNode;
                    break;
                }
                temp=temp->right;
            }
            else{
                if (temp->left==NULL){
                    temp->left=newNode;
                    break;
                }
                temp=temp->left;
            }
        }
    }
    return root;
}


Node* delete_node(Node* root, int data){
    if(root==NULL)
        printf("The tree is empty....");
    else{
        Node* temp= root;
        Node* pre_temp;
        while(temp!=NULL && temp->data!=data){
            if(data> temp->data){
                pre_temp=temp;
                temp=temp->right;
            }
            else{
                pre_temp=temp;
                temp=temp->left;
            }
        }

    }

    return root;
}

void preorder_traversal(Node* root){
    if (root==NULL)
        return;
    printf("%d ",root->data);
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

int main(){
    Node* root=NULL;
    int elements[]={50,30,10,40, 80,70,100};
    for(int i=0; i<sizeof(elements)/sizeof(int); ++i)
        root=insert_node(root, elements[i]);
    printf("\nThe nodes are:\n");
    preorder_traversal(root);
    return 0;
}
