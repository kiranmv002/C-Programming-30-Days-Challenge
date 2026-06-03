#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {

    struct Node *head, *second, *third;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->prev = NULL;
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = NULL;

    printf("Doubly Linked List Created Successfully\n");

    return 0;
}
