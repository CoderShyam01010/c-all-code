#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int row_sum[ROWS] = {0}; // initialize row sums to 0
    int col_sum[COLS] = {0}; // initialize column sums to 0
    
    // Calculate row sums
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            row_sum[i] += matrix[i][j];
        }
    }
    
    // Calculate column sums
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            col_sum[j] += matrix[i][j];
        }
    }
    
    // Print row sums
    printf("Row sums:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d sum: %d\n", i+1, row_sum[i]);
    }
    
    // Print column sums
    printf("Column sums:\n");
    for (int j = 0; j < COLS; j++) {
        printf("Column %d sum: %d\n", j+1, col_sum[j]);
    }
    return 0;
}
