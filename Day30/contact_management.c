#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    int id;
    char name[50];
    char phone[20];
    char email[50];
};

void addContact() {
    FILE *fp = fopen("contacts.txt", "a");
    struct Contact c;

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    printf("Enter Contact ID: ");
    scanf("%d", &c.id);

    printf("Enter Name: ");
    scanf(" %[^\n]", c.name);

    printf("Enter Phone Number: ");
    scanf(" %[^\n]", c.phone);

    printf("Enter Email: ");
    scanf(" %[^\n]", c.email);

    fprintf(fp, "%d|%s|%s|%s\n",
            c.id, c.name, c.phone, c.email);

    fclose(fp);

    printf("Contact added successfully.\n");
}

void viewContacts() {
    FILE *fp = fopen("contacts.txt", "r");
    struct Contact c;

    if (fp == NULL) {
        printf("No contacts available.\n");
        return;
    }

    printf("\n===== Contact List =====\n");

    while (fscanf(fp, "%d|%49[^|]|%19[^|]|%49[^\n]\n",
                  &c.id, c.name, c.phone, c.email) == 4) {

        printf("\nID    : %d", c.id);
        printf("\nName  : %s", c.name);
        printf("\nPhone : %s", c.phone);
        printf("\nEmail : %s\n", c.email);
    }

    fclose(fp);
}

void searchContact() {
    FILE *fp = fopen("contacts.txt", "r");
    struct Contact c;
    int id;
    int found = 0;

    if (fp == NULL) {
        printf("No contacts available.\n");
        return;
    }

    printf("Enter Contact ID: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d|%49[^|]|%19[^|]|%49[^\n]\n",
                  &c.id, c.name, c.phone, c.email) == 4) {

        if (c.id == id) {
            printf("\nContact Found\n");
            printf("ID    : %d\n", c.id);
            printf("Name  : %s\n", c.name);
            printf("Phone : %s\n", c.phone);
            printf("Email : %s\n", c.email);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found.\n");

    fclose(fp);
}
