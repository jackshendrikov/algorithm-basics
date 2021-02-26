#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
 
int main()
{
    int i, n, mas[n], new_arr[n];
    float a, b, final, numerator = 1;
    setlocale(0, "ukr");
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter a: ");
    scanf("%f", &a);
    
    printf("Enter b: ");
    scanf("%f", &b);
    srand(time(0));
    printf("   Original Array    |  Intermediate Array |    Resulting value\n");
     
    for (i = 0; i < n; i++) { 
        int num_mp = 1;
        mas[i] = rand() % 201-100; 
        printf("       % -10d", mas[i]);
        new_arr[i] = mas[i];
        
        if (new_arr[i] >= -15 && new_arr[i] <= 25){
            final = new_arr[i] + a*b;
            printf("    |     % -15.3f", final);
        } else{
            final = 2*a + 3*b;
            printf("    |     % -15.3f", final);
        }
        
        if (i % 2 == 0){ num_mp = -1; }
        numerator *= num_mp * ((final + a)/((i+1)*b));
        printf(" |     % -15.3f\n", numerator);    
    }
    return 0;
}
