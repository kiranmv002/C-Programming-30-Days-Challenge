int main() {
    int num, square, temp, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    int divisor = 1;
    for (int i = 0; i < digits; i++) {
        divisor = divisor * 10;
    }

    if (square % divisor == num) {
        printf("It is an Automorphic Number.\n");
    } else {
        printf("It is not an Automorphic Number.\n");
    }

    return 0;
}
