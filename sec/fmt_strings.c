#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int A = -73;
    unsigned int B = 31337;
    strcpy(string, "This is my string"); // strcpy will crash if your string is longer than the allocated length above [100]
    printf("[A] Dec: %d, Hex: %x, Unsigned: %u\n", A, A, A);
    printf("&A: %p\n", &A);
    printf("[B] Dec: %d, Hex: %x, Unsigned: %u\n", B, B, B);
    printf("[field width on B] 3: '%3u', 10: '%10u', 010: '%010u', 08: '%08u'\n", B, B, B, B);
    printf("[string] '%s' Address: %p\n", string, &string);
}