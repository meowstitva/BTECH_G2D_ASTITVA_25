// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n, f=1;
    printf("Factorial of which number: ");
    scanf("%d",&n);
    for (n ; n>=1 ; n--) {
        f = f*n;
    }
    printf("factorial of given no. is: %d",f);
    return 0;
}