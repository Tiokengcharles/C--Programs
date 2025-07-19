#include <stdio.h>

int main() {
    int square[4][4];
    int rowSum[4] = {0}, colSum[4] = {0};
    int diag1 = 0, diag2 = 0;
    int i, j;

    printf("Enter the numbers from 1 to 16 in any order:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &square[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%2d ", square[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            rowSum[i] += square[i][j];
            colSum[j] += square[i][j];
            if (i == j)
                diag1 += square[i][j];
            if (i + j == 3)
                diag2 += square[i][j];
        }
    }

    printf("\nRow sums:     ");
    for (i = 0; i < 4; i++) {
        printf("%d ", rowSum[i]);
    }

    printf("\nColumn sums:  ");
    for (j = 0; j < 4; j++) {
        printf("%d ", colSum[j]);
    }

    printf("\nDiagonal sums: %d %d\n", diag1, diag2);

    return 0;
}

