
int main() {
    int matrix[3][3], sum = 0;

    printf("Enter 3x3 matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&matrix[i][j]);

    for(int i=0;i<3;i++) {
        sum += matrix[i][i];  // main diagonal
    }

    printf("Sum of diagonal = %d\n", sum);

    return 0;
}
