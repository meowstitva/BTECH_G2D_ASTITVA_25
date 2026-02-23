#include <stdio.h>

int main() {
    float r, a, c;
    float PI = 3.14;

    printf("Enter radius of the circle: ");
    scanf("%f", &r);

    a = PI*r*r;
    c = 2*PI*r;

    printf("Area of circle = %f\nCircumference of circle = %f\n",a,c);
    
    return 0;
}
