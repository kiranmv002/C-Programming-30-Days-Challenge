int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Elements entered:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    free(ptr);

    return 0;
}
