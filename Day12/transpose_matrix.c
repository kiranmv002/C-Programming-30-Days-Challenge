int main() {
    int matrix[2][2];

    printf("Enter matrix:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%d",&matrix[i][j]);

    printf("Transpose:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            printf("%d ", matrix[j][i]);
        printf("\n");
    }

    return 0;
}
