int main() {
    int num, square, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    while (square > 0) {
        digit = square % 10;
        sum = sum + digit;
        square = square / 10;
    }

    if (sum == num) {
        printf("It is a Neon Number.\n");
    } else {
        printf("It is not a Neon Number.\n");
    }

    return 0;
}
