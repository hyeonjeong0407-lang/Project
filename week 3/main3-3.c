#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main(void) {
    int a, b;       
    float result;   

    printf("enter two integers: ");
    scanf("%d,%d", &a, &b);   

    result = 1.0 * a / b;     

    printf("%f / %f = %f\n", 1.0 * a, 1.0 * b, result);

    return 0;
}
