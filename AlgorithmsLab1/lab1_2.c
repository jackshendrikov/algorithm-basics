#include <stdio.h>
#include <stdlib.h>

int main()
{
    float res,x;

    printf("Enter x: ");
    scanf("%g", &x);

    if ((x >= 0 && x <= 8) || x >= 16) {
	   res = ((-3*x*x)/5) - 9;
        printf("result = %g\n", res);
        printf("x belongs to the interval [0, 8] U [16, ∞] \n");
        }
        else if (x < -1) {	
		 res = 15*x - 2;
            printf("result = %g\n", res);
            printf("x belongs to the interval (-∞, -1) \n");
        }
        else {
            printf("x does not belong to the given interval \n");
        }

    return 0;
}
