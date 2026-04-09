

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "r");

    if(fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("Student Records:\n");

    while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        printf("%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);

    return 0;
}
