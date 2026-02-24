int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Array elements:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
