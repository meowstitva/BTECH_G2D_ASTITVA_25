#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    int array1[size], array2[size], sum_array[size];

    printf("Enter elements of first array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of second array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    for(int i = 0; i < size; i++) {
        sum_array[i] = array1[i] + array2[i];
    }

    printf("Sum of corresponding elements:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", sum_array[i]);
    }

    return 0;
}