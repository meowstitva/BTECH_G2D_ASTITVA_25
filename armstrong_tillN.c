#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum, digits, last_digit;

    printf("Armstrong numbers from 1 to 1000 are:\n");

    for (num = 1; num <= 10000; num++) {
        temp = num;
        sum = 0;

    
        int n = 0;
        int temp_copy = temp;
        while (temp_copy != 0) {
            temp_copy /= 10;
            n++;
        }

        temp_copy = num;

      
        while (temp_copy != 0) {
            last_digit = temp_copy % 10;
            sum += pow(last_digit, n);
            temp_copy /= 10;
        }

       
        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}