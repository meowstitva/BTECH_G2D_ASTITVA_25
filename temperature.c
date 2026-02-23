#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in celcius: ");
    scanf("%f", &c);

    f = (c*9/5)+32;

    printf("temperature in faehanite = %f",f);
    
    return 0;
}
