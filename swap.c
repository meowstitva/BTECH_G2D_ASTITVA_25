#include <stdio.h>

int main() {
    int a, b, c;

    printf("enter 1st no: ");
    scanf("%d", &a);

    printf("enter 2nd no: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("%d\n%d",a,b);
    
    return 0;
}
