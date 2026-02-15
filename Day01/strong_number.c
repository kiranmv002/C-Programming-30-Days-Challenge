int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        sum = sum + factorial(digit);
        num = num / 10;
    }

    if (sum == original) {
        printf("It is a Strong Number.\n");
    } else {
        printf("It is not a Strong Number.\n");
    }

    return 0;
}
