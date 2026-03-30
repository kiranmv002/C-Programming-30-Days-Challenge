#include <stdio.h>

int main() {
    int n;

    printf("Enter rows: ");
    scanf("%d", &n);

    // Upper part
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++)
            printf("*");

        for(int space = 1; space <= 2*(n - i); space++)
            printf(" ");

        for(int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
