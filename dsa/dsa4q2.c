#include <stdio.h>

int is_symmetric(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}

int is_square(int matrix[][3], int rows, int cols) {
    return rows == cols;
}

void read_matrix(int matrix[][3], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int matrix[][3], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3];
    int rows, cols;

    printf("Enter the number of rows (maximum 3): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (maximum 3): ");
    scanf("%d", &cols);

    if (rows > 3 || cols > 3) {
        printf("Invalid size. Maximum size allowed is 3x3.\n");
        return 0;
    }

    read_matrix(matrix, rows, cols);
    print_matrix(matrix, rows, cols);

    if (is_square(matrix, rows, cols)) {
        printf("The matrix is square.\n");
        if (is_symmetric(matrix, rows)) {
            printf("The matrix is symmetric.\n");
        } else {
            printf("The matrix is not symmetric.\n");
        }
    } else {
        printf("The matrix is not square.\n");
    }

    return 0;
}
