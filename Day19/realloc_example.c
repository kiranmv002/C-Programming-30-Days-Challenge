#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter initial size: ");
    scanf("%d", &n);

    int *ptr = (int*) malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    int newSize;
    printf("Enter new size: ");
    scanf("%d", &newSize);

    ptr = (int*) realloc(ptr, newSize * sizeof(int));

    printf("Enter new elements:\n");
    for(int i = n; i < newSize; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Updated array:\n");
    for(int i = 0; i < newSize; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
