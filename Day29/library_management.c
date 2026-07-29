#include <stdio.h>
#include <stdlib.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

void addBook() {
    FILE *fp = fopen("books.txt", "a");
    struct Book b;

    if(fp == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    fprintf(fp, "%d,%s,%s\n", b.id, b.title, b.author);

    fclose(fp);

    printf("Book added successfully.\n");
}

