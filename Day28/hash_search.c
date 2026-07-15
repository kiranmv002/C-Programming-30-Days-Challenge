#include <stdio.h>

#define SIZE 10

int hashTable[SIZE] = {-1,-1,-1,-1,-1,15,25,37,-1,-1};

int main() {

    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int index = key % SIZE;

    if(hashTable[index] == key)
        printf("Element Found\n");
    else
        printf("Element Not Found\n");

    return 0;
}
