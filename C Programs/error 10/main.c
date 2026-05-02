#include <stdio.h>

int main() {
    int arr[5]; 
    arr[4] = 10; // Use a valid index within bounds (0-4)

    printf("arr[4] = %d\n", arr[4]);

    return 0;
}

