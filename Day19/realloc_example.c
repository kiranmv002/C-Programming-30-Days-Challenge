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

