#include <stdio.h>
void Print(int *M, int n, int i)
{

    if (n)
    {
        if (n & 1)
            printf("%d ",M[i]);
        Print(M, n >> 1, i + 1);
    }
}

int main() {
    int n;
    int m;
    int a[100];
    int b[100];
    int num = 0;
    int k = 0;
    int c[10];

    printf("Enter an amount of elements in array A: ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        printf("Enter elements of array A: \n");
        scanf("%d", &a[i]);
    }
    printf("Enter an amount of elements in array B: ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        printf("Enter elements of array B: \n");
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; ++j) {
            if (a[i] == b[j]) {
                break;
            }

            if (j == m - 1) {
                c[k] = a[i];
                num += 1;
                printf("Result of operation : %d\n", c[k]);
                k += 1;

            }
        }

    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; ++j) {
            if (b[i] == a[j]) {
                break;
            }

            if (j == n - 1) {
                c[k] = b[i];
                num += 1;
                printf("Result of operation : %d\n", c[k]);
                k += 1;

            }

        }
    }
    int r, i, size;
    size = num;
    r = 1 << size;

    printf("\n\nA = { 0");
    for (i = 0; i < r; i++)
    {
        Print(c, i, 0);
        printf(" | ");
    }
    printf(" }");
    return 0;
}