#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* search(struct Node *root, int key) {

    if(root == NULL || root->data == key)
        return root;

    if(key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

int main() {

    struct Node root = {50, NULL, NULL};
    struct Node left = {30, NULL, NULL};
    struct Node right = {70, NULL, NULL};

    root.left = &left;
    root.right = &right;

    int key = 70;

    if(search(&root, key))
        printf("Element Found\n");
    else
        printf("Element Not Found\n");

    return 0;
}
