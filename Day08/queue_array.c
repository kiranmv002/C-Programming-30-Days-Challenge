
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {

    if(rear == SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear++;
    queue[rear] = value;

    printf("Inserted %d\n", value);
}

void dequeue() {

    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Removed %d\n", queue[front]);
    front++;
}

int main() {

    enqueue(5);
    enqueue(15);
    enqueue(25);

    dequeue();

    return 0;
}
