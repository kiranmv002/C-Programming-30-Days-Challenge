
struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node *head = NULL, *temp, *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter value to insert at end: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    printf("Node inserted at end.");

    return 0;
}
