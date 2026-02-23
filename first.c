// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,d,e,f;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("Math:%d",a);
    printf("Eng:%d",b);
    printf("SST:%d",c);
    printf("Science:%d",d);
    printf("Hindi:%d",e);
   f=a+b+c+d+e;\
    printf("Sum of 5 subjects:%d",f);
    return 0;
}