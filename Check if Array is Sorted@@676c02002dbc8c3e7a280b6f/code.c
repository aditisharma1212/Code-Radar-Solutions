Here's a version of the program that doesn't use an isSorted variable. It checks directly inside the loop and prints the result without additional flags:
#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            printf("Not Sorted");
            return 0;
        }
    }

    printf("Sorted"); 
    return 0;
}

