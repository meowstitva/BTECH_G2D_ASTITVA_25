#include <stdio.h>

int main() 
{
    int a,b;
    
    printf("enter a no.: ");
    scanf("%d", &a);
    printf("enter another no.: ");
    scanf("%d", &b);
    if (a == b) 
    {
        printf("same");
    }
    else {
        printf("Not same");
    }
    return 0;
}