/**
 * gcc -g -o main pointer.c && main
 * gdb -q main
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str_a[20]; // str_a is a pointer
    char *pointer;
    char *pointer2;

    strcpy(str_a, "Hello, world!\n");
    pointer = str_a;
    printf("%p\n", pointer); // 0x7fff58fd33b0
    printf("%s\n", pointer); // Hello, world!\n

    pointer2 = pointer + 2;
    printf("%p\n", pointer2); // 0x7fff58fd33b2 <-- NOTE. b0 + 2 == b2.
    printf("%s\n", pointer2); // llo, world!\n
    strcpy(pointer2, "Hello");
    printf("%p\n", pointer); // 0x7fff58fd33b0
    printf("%s\n", pointer); // HeHello <-- NOTE the end of "Hello, world!\n" is not printed. That's strcpy's behavior.
}