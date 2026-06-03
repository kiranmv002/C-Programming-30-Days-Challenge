#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {

    struct Node n1, n2, n3;

    n1.data = 10;
    n2.data = 20;
    n3.data = 30;

    n1.prev = NULL;
    n2.prev = &n1;
    n3.prev = &n2;

    struct Node *temp = &n3;

    printf("Backward Traversal:\n");

    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }

    return 0;
}
