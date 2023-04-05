#include<stdio.h>
int main()
{
    double a, b, product;
    printf("Enter two Number=\n");
    scanf (" %lf %lf", &a, &b );
    // calculate product//
    product = a*b;
    // .2lf 
    printf("Product = %.2lf\n", product);
     
    return 0;
}