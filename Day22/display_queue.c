#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node));
    struct Node *n3 = malloc(sizeof(struct Node));

    n1->data = 5;
    n2->data = 15;
    n3->data = 25;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    struct Node *temp = n1;

    printf("Queue Elements:\n");

    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
