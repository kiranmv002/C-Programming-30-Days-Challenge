#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int roll, found = 0;

    fp = fopen("students.txt", "r");

    if(fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        if(s.roll == roll) {
            printf("Record Found: %d %s %.2f\n", s.roll, s.name, s.marks);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Record not found.\n");

    fclose(fp);

    return 0;
}
