#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {

    struct Node n1, n2, n3;

    n1.data = 10;
    n2.data = 20;
    n3.data = 30;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n1;

    int count = 0;
    struct Node *temp = &n1;

    do {
        count++;
        temp = temp->next;
    } while(temp != &n1);

    printf("Total Nodes = %d\n", count);

    return 0;
}
