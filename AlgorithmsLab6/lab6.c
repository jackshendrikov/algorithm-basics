#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main() {
    int i, j, m, n;
    printf("Enter the dimension of the matrix (with a space): \n");
    scanf("%d %d", &m, &n);


    int Z[m][n];
    srand(time(NULL));
    printf("--------------------------\n");
    printf("Matrix before sorting:\n");
    for(i = 0; i < m; ++i){
       for(j = 0; j < n; ++j){
            Z[i][j] = 10 + rand()%90;
            printf("%d ", Z[i][j]);
       }
       printf("\n");
    }
    
    for(j = 0; j < m; ++j) {
        int left = 0,
        right = n - 1;
        
        while (left < right) {
            for (int i = left; i < right; i++) {
                if (Z[j][i] > Z[j][i + 1])
                    swap(&Z[j][i], &Z[j][i+1]);
                }
            right--;

            for (int i = right; i > left; i--) {
                if (Z[j][i - 1] > Z[j][i])
                    swap(&Z[j][i], &Z[j][i-1]);
                }
            left++;
        }
    }
    printf("--------------------------\n");
    printf("Matrix after shaker sorting:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf(" %d", Z[i][j]);
        }
        printf("\n"); }
}