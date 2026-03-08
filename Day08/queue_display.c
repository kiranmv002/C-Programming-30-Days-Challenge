#define SIZE 5

int queue[SIZE] = {5,15,25};
int front = 0;
int rear = 2;

void display() {

    if(front > rear) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements:\n");

    for(int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
}

int main() {

    display();

    return 0;
}
