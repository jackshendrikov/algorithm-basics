#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main() 
 {
    int n, counter = 0;
    double sum = 0, numerator = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
      numerator *= i - cos(i);
      sum += numerator / (i + cos(i));
      counter += 5;
    }

    printf("Sum = %.7f\n", sum);
    printf("Number of operations = %d\n",counter);

    return 0;
}
