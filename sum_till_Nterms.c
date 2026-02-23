#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    while (n>=0){
        sum = sum + n;
        n--;
    }
    printf("%d",sum);
    return 0;
}
