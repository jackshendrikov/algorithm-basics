#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void main()
{
    int i, j, k, a, m, n, x;
    printf("Enter the dimension of the matrix (with a space): \n");
    scanf("%d %d", &m, &n);

    int Z[m][n];
    srand(time(NULL));
    
    printf("---------------------------\n");
    printf("Matrix before sorting: \n");
    for(i=0;i<m;++i) {
       for(j=0;j<n;++j) {
            Z[i][j]=20+rand()%10;
            printf("%d ", Z[i][j]);
       }
       printf("\n");
    }
    
    printf("---------------------------\n");
    printf("After sorting in nondecreasing order by rows: \n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            for (k =(j + 1); k < n; ++k) {
                if (Z[i][j] > Z[i][k]) {
                    a = Z[i][j];
                    Z[i][j] = Z[i][k];
                    Z[i][k] = a;
                }
            }
        }
    }
    
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf(" %d", Z[i][j]);
        }
        printf("\n");
    }
    
    printf("---------------------------\n");
    printf("After sorting in nondecreasing order by columns: \n");
    for (j = 0; j < n; ++j) {
        for (i = 0; i < m; ++i) {
            for (k = i + 1; k < m; ++k) {
                if (Z[i][j] > Z[k][j]) {  // Comparison of other elements of the array
                    a = Z[i][j]; // Use a temporary variable to store the last value
                    Z[i][j] = Z[k][j]; // change the places of the variable
                    Z[k][j] = a; // save the last value
                }
            }
        }
    }
    
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf(" %d", Z[i][j]);
        }
        printf("\n");
    }
    
    printf("---------------------------\n");
    int my_val = 0;
    for (x = 20; x <= 25; ++x) {
        int l = 0, t = n-1;
        while ( l < n && t >= 0 ) { 
            if ( Z[l][t] == x ) {
              printf("Element %d found at position (%d, %d)\n", x, l, t);
              my_val ++;
            }
            if (Z[l][t] > x)
                t--;
            else
                l++;
        }
    }
    
    if (my_val == 0)
        printf("Items from the range [20, 25] were not found in the matrix ...\n");
}
