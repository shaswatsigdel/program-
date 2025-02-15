#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    
    printf("Enter elements of the matrix:");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Upper triangular matrix:");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j)
                printf("0 ");
            else
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
