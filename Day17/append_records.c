#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "a");

    printf("Enter roll, name, marks to append: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);

    fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);

    fclose(fp);

    printf("Record appended successfully.\n");

    return 0;
}
