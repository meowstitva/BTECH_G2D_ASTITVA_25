#include <stdio.h>
#include <math.h>

int main() 
{
    float p, r, t, si, a, ci;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time (in years): ");
    scanf("%f", &t);
    
    si = p*r*t/100;
    a = p * pow((1 + r / 100), t);
    ci = a - p;

    printf("simpleinterest = %f\nCompound Interest = %f\n",si, ci);

    return 0;
}
