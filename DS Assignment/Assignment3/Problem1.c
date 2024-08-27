#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to display the elements of the linked list
void displayList(struct Node *head) {
    struct Node *current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to insert a node at the beginning of the linked list
struct Node *insertAtBeginning(struct Node *head, int value) {
    struct Node *newNode = createNode(value);
    newNode->next = head;
    return newNode;
}

// Function to insert a node at the end of the linked list
struct Node *insertAtEnd(struct Node *head, int value) {
    struct Node *newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }
    struct Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Function to insert a node before a given node value
struct Node *insertBeforeNode(struct Node *head, int value, int target) {
    struct Node *newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }
    if (head->data == target) {
        newNode->next = head;
        return newNode;
    }
    struct Node *current = head;
    while (current->next != NULL && current->next->data != target) {
        current = current->next;
    }
    if (current->next == NULL) {
        printf("Node with value %d not found.\n", target);
        free(newNode);
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}

// Function to insert a node after a given node value
struct Node *insertAfterNode(struct Node *head, int value, int target) {
    struct Node *newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }
    struct Node *current = head;
    while (current != NULL && current->data != target) {
        current = current->next;
    }
    if (current == NULL) {
        printf("Node with value %d not found.\n", target);
        free(newNode);
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}

// Function to delete a node from the beginning of the linked list
struct Node *deleteFromBeginning(struct Node *head) {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return NULL;
    }
    struct Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Function to delete a node from the end of the linked list
struct Node *deleteFromEnd(struct Node *head) {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct Node *current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
    return head;
}

// Function to delete a node after a given node value
struct Node *deleteAfterNode(struct Node *head, int target) {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return NULL;
    }
    struct Node *current = head;
    while (current != NULL && current->data != target) {
        current = current->next;
    }
    if (current == NULL || current->next == NULL) {
        printf("Node with value %d not found or no node after it.\n", target);
        return head;
    }
    struct Node *temp = current->next;
    current->next = temp->next;
    free(temp);
    return head;
}

// Function to delete the entire linked list
void deleteLinkedList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    struct Node *head = NULL;
    int choice, value, target;

    do {
        printf("\nMenu:\n");
        printf("1. Create a single linked list\n");
        printf("2. Display the elements of the linked list\n");
        printf("3. Insert a node at the beginning\n");
        printf("4. Insert a node at the end\n");
        printf("5. Insert a node before a given node\n");
        printf("6. Insert a node after a given node\n");
        printf("7. Delete a node from the beginning\n");
        printf("8. Delete a node from the end\n");
        printf("9. Delete a node after a given node\n");
        printf("10. Delete the entire linked list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to create the list: ");
                scanf("%d", &value);
                head = createNode(value);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("Enter the value to insert at the beginning: ");
                scanf("%d", &value);
                head = insertAtBeginning(head, value);
                break;
            case 4:
                printf("Enter the value to insert at the end: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                break;
            case 5:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                printf("Enter the target value before which to insert: ");
                scanf("%d", &target);
                head = insertBeforeNode(head, value, target);
                break;
            case 6:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                printf("Enter the target value after which to insert: ");
                scanf("%d", &target);
                head = insertAfterNode(head, value, target);
                break;
            case 7:
                head = deleteFromBeginning(head);
                break;
            case 8:
                head = deleteFromEnd(head);
                break;
            case 9:
                printf("Enter the target value after which to delete: ");
                scanf("%d", &target);
                head = deleteAfterNode(head, target);
                break;
            case 10:
                deleteLinkedList(head);
                head = NULL;
                printf("Linked list deleted.\n");
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 0);

    // Free the dynamically allocated memory before exiting
    deleteLinkedList(head);

    return 0;
}
