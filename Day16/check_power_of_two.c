#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0 && (num & (num - 1)) == 0)
        printf("Power of 2\n");
    else
        printf("Not a power of 2\n");

    return 0;
}
