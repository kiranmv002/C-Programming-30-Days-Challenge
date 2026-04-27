#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node *head = NULL, *temp, *prev;

    // Creating list manually
    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node));
    struct Node *n3 = malloc(sizeof(struct Node));

    n1->data = 10; n2->data = 20; n3->data = 30;
    n1->next = n2; n2->next = n3; n3->next = NULL;

    head = n1;

    int key = 20;

    temp = head;
    prev = NULL;

    while(temp != NULL) {
        if(temp->data == key) {
            if(prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    printf("After deletion:\n");

    temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
