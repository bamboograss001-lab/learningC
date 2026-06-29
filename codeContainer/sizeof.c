#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <sys/types.h>
#include <stdbool.h>

int main() {
    
    double age = 25;
    void *genericPtr = &age;

    printf("--- Real Hardware Sizes ---\n\n");

    // 1. Standard Primitives
    printf("\"char\"   = %16zu byte\n", sizeof(char));
    printf("\"int\"    = %16zu bytes\n", sizeof(int));
    printf("\"double\" = %16zu bytes\n", sizeof(double));
    printf("\"float\"  = %16zu bytes\n", sizeof(float));
    printf("\"bool\"   = %16zu byte\n", sizeof(bool));
    printf("\"void\"   = %16zu bytes\n", sizeof(void));
    printf("\"short\"  = %16zu bytes\n", sizeof(short));
    printf("\"long\"   = %16zu bytes\n", sizeof(long));
    printf("\"void pointer\" = %16zu bytes\n", sizeof(genericPtr));
    printf("\"long int\"     = %16zu bytes\n", sizeof(long int));
    printf("\"long long\"    = %16zu bytes\n", sizeof(long long));
    printf("\"long double\"  = %16zu bytes\n\n", sizeof(long double));

    // 2. Fixed-Width architectural Types
    printf("\"int8_t\"   = %16zu byte\n", sizeof(int8_t));
    printf("\"uint8_t\"  = %16zu byte\n", sizeof(uint8_t));
    printf("\"int16_t\"  = %16zu bytes\n", sizeof(int16_t));
    printf("\"uint16_t\" = %16zu bytes\n", sizeof(uint16_t));
    printf("\"int32_t \" = %16zu bytes\n", sizeof(int32_t));
    printf("\"uint32_t\" = %16zu bytes\n", sizeof(uint32_t));
    printf("\"int64_t\"  = %16zu bytes\n", sizeof(int64_t));
    printf("\"uint64_t\" = %16zu bytes\n", sizeof(uint64_t));
    printf("\"intptr_t\" = %16zu bytes\n\n", sizeof(intptr_t));

    // 3. System & Memory Types
    printf("\"size_t\"    = %16zu bytes\n", sizeof(size_t));
    printf("\"ptrdiff_t\" = %16zu bytes\n", sizeof(ptrdiff_t));
    printf("\"time_t\"    = %16zu bytes\n\n", sizeof(time_t));

    return 0;
}