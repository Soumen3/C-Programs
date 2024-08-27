#include <stdio.h>

char tree[100];

void root(char key) {
    if (tree[0] != '\0')
        printf("Tree already had root");
    else
        tree[0] = key;
}

void set_left(char key, int parent) {
    if (tree[parent] == '\0')
        printf("\nCan't set child at %d, no parent found", (parent * 2) + 1);
    else
        tree[(parent * 2) + 1] = key;
}

void set_right(char key, int parent) {
    if (tree[parent] == '\0')
        printf("\nCan't set child at %d, no parent found", (parent * 2) + 2);
    else
        tree[(parent * 2) + 2] = key;
}

int count_nodes() {
    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (tree[i] != '\0')
            count++;
    }
    return count;
}

void print_tree() {
    printf("\n");
    for (int i = 0; i < 10; i++) {
        if (tree[i] != '\0')
            printf("%c ", tree[i]);
        else
            printf("- ");
    }
}

int main() {
    root('A');
    set_left('B', 0);
    set_right('C', 0);
    set_left('D', 1);
    set_right('E', 1);
    set_right('F', 2);
    print_tree();
    printf("\nNumber of nodes in the tree: %d\n", count_nodes());
    return 0;
}
