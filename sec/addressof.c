#include <stdio.h>

int main() {
    int int_var = 5;
    int *int_ptr;
    int_ptr = &int_var; // put the address of int_var into int_ptr

    printf("&int_ptr = %p\n", &int_ptr);
    printf("int_ptr = %p\n", int_ptr);
    printf("*int_ptr = %d\n\n", *int_ptr);
    printf("&int_var = %p\n", &int_var);
    printf("int_var = %d\n", int_var);
}
