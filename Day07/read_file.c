int main() {
    FILE *fp;
    char name[50];
    int marks;

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    fscanf(fp, "%s %d", name, &marks);

    printf("Data from file:\n");
    printf("Name: %s\n", name);
    printf("Marks: %d\n", marks);

    fclose(fp);

    return 0;
}
