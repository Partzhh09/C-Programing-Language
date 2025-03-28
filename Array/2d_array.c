// #include <stdio.h>
// int main()
// {
//     int row, col,sum=0;
//     printf("Enter the value of row & Col: ");
//     scanf("%d %d", &row, &col);
//     int arr[row][col];
//     printf("Enter the values of matrix: ");
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t", arr[i][j]);
//             sum += arr[i][j];
//         }
//         printf("\n");
//     }
//     printf("Sum of Element: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int rows, cols;

//     printf("Enter the number of rows: ");
//     scanf("%d %d", &rows, &cols);

//     int matrix[rows][cols], transpose[cols][rows];

//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             printf("Element [%d][%d]: ", i, j);
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             transpose[j][i] = matrix[i][j];
//         }
//     }

//     printf("\nTranspose Matrix:\n");
//     for (int i = 0; i < cols; i++)
//     {
//         for (int j = 0; j < rows; j++)
//         {
//             printf("%d\t", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter the dimensions of the 3D matrices (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    int matrix1[x][y][z], matrix2[x][y][z], result[x][y][z];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("Element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &matrix1[i][j][k]);
            }
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("Element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &matrix2[i][j][k]);
            }
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                result[i][j][k] = matrix1[i][j][k] - matrix2[i][j][k];
            }
        }
    }

    printf("Resultant matrix after subtraction:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("%d\t", result[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}