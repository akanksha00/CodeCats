//roots of quad.
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,r1,r2;
    printf("Enter the coefficients of x^2, x and constant term:");
    scanf("%f%f%f",&a,&b,&c);
    r1=b+sqrt(b*b-4*a*c);
    r2=b-sqrt(b*b-4*a*c);
    printf("\nRoots are: %.1f & %.1f", r1/2,r2/2);
}