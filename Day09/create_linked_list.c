
struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node *head = NULL, *temp, *newNode;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter value: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    temp = head;

    printf("Linked List: ");

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
