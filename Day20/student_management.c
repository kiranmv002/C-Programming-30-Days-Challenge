#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void addStudent() {
    FILE *fp = fopen("students.txt", "a");
    struct Student s;

    printf("Enter roll, name, marks: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);

    fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    fclose(fp);

    printf("Student added successfully.\n");
}

void viewStudents() {
    FILE *fp = fopen("students.txt", "r");
    struct Student s;

    if(fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        printf("%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
}

void searchStudent() {
    FILE *fp = fopen("students.txt", "r");
    struct Student s;
    int roll, found = 0;

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        if(s.roll == roll) {
            printf("Found: %d %s %.2f\n", s.roll, s.name, s.marks);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student not found.\n");

    fclose(fp);
}

int main() {
    int choice;

    while(1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}
