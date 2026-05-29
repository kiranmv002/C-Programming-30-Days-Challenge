#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value) {

    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if(rear == NULL) {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

void dequeue() {

    if(front == NULL) {
        printf("Queue Underflow\n");
        return;
    }

    struct Node *temp = front;

    printf("Deleted: %d\n", front->data);

    front = front->next;

    free(temp);
}

int main() {

    enqueue(5);
    enqueue(15);
    enqueue(25);

    dequeue();

    return 0;
}
