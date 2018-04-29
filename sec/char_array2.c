/**
 * gcc -g -o char_array2 char_array2.c
 * gdb -q ./char_array2
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str_a[20];
    strcpy(str_a, "Hello, world!\n");
    printf("%s", str_a);
}