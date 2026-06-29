#include <stdio.h>

void demonstrationFunction(int func_arr[]) {
    // Inside the function, func_arr is just a POINTER
    printf("Inside function: sizeof(func_arr) = %zu bytes\n", sizeof(func_arr));
}

int main() {
    int main_arr[5] = {10, 20, 30, 40, 50};

    // Inside main(), the compiler knows the full array size
    // 5 elements * 4 bytes each = 20 bytes
    printf("Inside main:     sizeof(main_arr) = %zu bytes\n", sizeof(main_arr));

    demonstrationFunction(main_arr);

    return 0;
}