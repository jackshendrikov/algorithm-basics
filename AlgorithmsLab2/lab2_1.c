#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main() 
 {
    int n, counter = 0;
    double sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", & n);
    for (int i = 1; i <= n; i++) {
        double numerator = 1;
        for (int j = 1; j <= i; j++) {
            numerator *= j - cos(j);
            counter += 2;
        }
    sum += numerator / (i + cos(i));
    counter += 3;
    }
    printf("Sum = %.7f\n", sum);
    printf("Number of operations = %d\n", counter);

    return 0;
 }
