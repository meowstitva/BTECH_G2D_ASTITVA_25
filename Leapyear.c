// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int y;
    printf("Enter year: ");
    scanf("%d",&y);
    if (y%4 == 0){
        printf("This is a Leap Year");
    }
    else {
        printf("This is NOT a Leap Year");
    }
    return 0;
}