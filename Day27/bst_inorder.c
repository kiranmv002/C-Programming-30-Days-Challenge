#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

void inorder(struct Node *root) {

    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {

    struct Node n1 = {40, NULL, NULL};
    struct Node n2 = {20, NULL, NULL};
    struct Node n3 = {60, NULL, NULL};

    n1.left = &n2;
    n1.right = &n3;

    inorder(&n1);

    return 0;
}
