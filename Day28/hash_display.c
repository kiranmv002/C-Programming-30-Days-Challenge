#include <stdio.h>

#define SIZE 10

int hashTable[SIZE] = {-1,-1,-1,-1,-1,15,25,37,-1,-1};

int main() {

    printf("Hash Table\n");

    for(int i = 0; i < SIZE; i++) {

        if(hashTable[i] == -1)
            printf("%d : Empty\n", i);
        else
            printf("%d : %d\n", i, hashTable[i]);
    }

    return 0;
}
