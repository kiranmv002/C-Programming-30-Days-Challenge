#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node));
    struct Node *n3 = malloc(sizeof(struct Node));

    n1->data = 10; n2->data = 20; n3->data = 30;
    n1->next = n2; n2->next = n3; n3->next = NULL;

    struct Node *temp = n1;
    int key = 20, found = 0;

    while(temp != NULL) {
        if(temp->data == key) {
            found = 1;
            break;
        }
        temp = temp->next;
    }

    if(found)
        printf("Element found\n");
    else
        printf("Element not found\n");

    return 0;
}
