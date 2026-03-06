#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value) {
    if(top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("Inserted %d\n", value);
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Removed %d\n", stack[top]);
        top--;
    }
}

int main() {

    push(10);
    push(20);
    push(30);

    pop();

    return 0;
}
