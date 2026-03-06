#define SIZE 5

int stack[SIZE] = {10,20,30};
int top = 2;

void display() {

    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n");

    for(int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {

    display();

    return 0;
}
