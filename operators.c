#include <stdio.h>

int main() 
{
    int a; 
    int b;
    printf("1st no: ");
    scanf("%d", &a);
    printf("2nd no: ");
    scanf("%d", &b);
    printf("a+b = %d\n", a + b);
    printf("a-b = %d\n", a - b);
    printf("a*b = %d\n", a * b);
    printf("a/b = %d\n", a / b);
    int p1 = a++;
    int p2 = ++a;
    printf("%d\n",p1);
    printf("%d",p2);
    return 0;
}
