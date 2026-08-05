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

void viewBooks() {
    FILE *fp = fopen("books.txt", "r");
    struct Book b;

    if(fp == NULL) {
        printf("No books available.\n");
        return;
    }

    printf("\n----- Book List -----\n");

    while(fscanf(fp, "%d,%49[^,],%49[^\n]\n", &b.id, b.title, b.author) == 3) {
        printf("ID     : %d\n", b.id);
        printf("Title  : %s\n", b.title);
        printf("Author : %s\n\n", b.author);
    }

    fclose(fp);
}

void searchBook() {
    FILE *fp = fopen("books.txt", "r");
    struct Book b;
    int id, found = 0;

    if(fp == NULL) {
        printf("No books available.\n");
        return;
    }

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    while(fscanf(fp, "%d,%49[^,],%49[^\n]\n", &b.id, b.title, b.author) == 3) {
        if(b.id == id) {
            printf("\nBook Found\n");
            printf("ID     : %d\n", b.id);
            printf("Title  : %s\n", b.title);
            printf("Author : %s\n", b.author);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Book not found.\n");

    fclose(fp);
}

int main() {

    int choice;

    while(1) {

        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addBook();
                break;

            case 2:
                viewBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                printf("Thank You!\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
