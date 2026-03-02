int main() {
    FILE *fp;
    char name[50];
    int marks;

    fp = fopen("data.txt", "w");

    if(fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter marks: ");
    scanf("%d", &marks);

    fprintf(fp, "%s %d", name, marks);

    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}
