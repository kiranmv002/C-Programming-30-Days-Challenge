#include <stdio.h>

#define SIZE 10

int hashTable[SIZE];

void initialize() {
    for(int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}

void insert(int value) {
    int index = value % SIZE;

    if(hashTable[index] == -1)
        hashTable[index] = value;
    else
        printf("Collision occurred for %d\n", value);
}

int main() {

    initialize();

    insert(15);
    insert(35);
    insert(47);

    printf("Elements inserted.\n");

    return 0;
}
