#include<stdio.h>
int main() 
{
    int rows, cols , i, j, x;
    printf("Enter the number of rows and columns in the matrix (separated by a space):\n");
    scanf("%d %d",&rows, &cols);
    
    int mat[rows][cols];
    
    printf("\nEnter the elements of the matrix:\n");
    for(i = 0; i < rows ; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
    
    printf("\nYour 'sorted' matrix:\n");
    for(i = 0; i < rows ; i++){
        for(j = 0; j < cols; j++){
            printf("%d",mat[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    
    printf("\n");
    int my_val = 0;
    for (i = 0; i < rows; ++i) {
        for (x = 0; x <= 5; ++x) {
        int l = 0, r = cols-1;
            while (l <= r) { 
                int mid = l + (r-l)/2; 
                if (mat[i][mid] == x) {
                    printf("Element %d found at position (%d, %d)\n", x, i, mid);
                    my_val ++;
                    break;
                }
                
                if (mat[i][mid] < x) 
                    l = mid + 1; 
                else r = mid - 1; 
            }
        }    
    }
    
    if (my_val == 0)
        printf("Items from the range [0, 5] were not found in the matrix...\n");
}
