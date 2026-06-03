#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {

    struct Node *head = NULL;

    struct Node *newNode = malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newNode->data);

    newNode->prev = NULL;
    newNode->next = head;

    head = newNode;

    printf("Node inserted at beginning.\n");

    return 0;
}
