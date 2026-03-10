
struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node *head = NULL, *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter value to insert at beginning: ");
    scanf("%d", &newNode->data);

    newNode->next = head;
    head = newNode;

    printf("Node inserted successfully.");

    return 0;
}
