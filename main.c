#include <stdio.h>

void main() {
    char c = 'A';
    char *c_ptr = &c;

    printf("c=%c, &c=%p\n", c, &c);
    printf("c_prt=%p\n", c_ptr);
    printf("&c_ptr=%p\n", &c_ptr);
    printf("*c_ptr=%c\n", *c_ptr);
}