#include <stdio.h>
#include <stdlib.h>
#include "../src/lib.h"


int main(void) {
    printf("%i\n", (int) sizeof(byte));
    printf("%i\n", (int) sizeof(bool));

    printf("%i\n", (int) sizeof(intsize));
    printf("%i\n", (int) sizeof(int8));
    printf("%i\n", (int) sizeof(int16));
    printf("%i\n", (int) sizeof(int32));
    printf("%i\n", (int) sizeof(int64));

    printf("%i\n", (int) sizeof(uintsize));
    printf("%i\n", (int) sizeof(uint8));
    printf("%i\n", (int) sizeof(uint16));
    printf("%i\n", (int) sizeof(uint32));
    printf("%i\n", (int) sizeof(uint64));

    printf("%i\n", (int) sizeof(float32));
    printf("%i\n", (int) sizeof(float64));

    return 0;
}
