#include <stdio.h>

struct Bit_Data {
    signed int data : 31;
    signed int b : 2;
};

int main(void)
{
    printf("%zu\n", sizeof(struct Bit_Data));
}