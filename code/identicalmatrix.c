#include <stdio.h>

int main() {
    int a[10][10], b[10][10], m, n, i, j, c = 1;

    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != b[i][j]) c = 0;

    printf("%s\n", c ? "Yes" : "No");

    return 0;
}
