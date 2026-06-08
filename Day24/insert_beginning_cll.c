#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    struct Node *head = malloc(sizeof(struct Node));
    struct Node *newNode = malloc(sizeof(struct Node));

    head->data = 20;
    head->next = head;

    printf("Enter value: ");
    scanf("%d", &newNode->data);

    newNode->next = head;

    head = newNode;

    printf("Node inserted at beginning.\n");

    return 0;
}
