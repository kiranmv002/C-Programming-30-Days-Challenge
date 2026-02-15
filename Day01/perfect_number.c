int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == num) {
        printf("It is a Perfect Number.\n");
    } else {
        printf("It is not a Perfect Number.\n");
    }

    return 0;
}
