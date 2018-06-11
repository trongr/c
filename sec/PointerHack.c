#include <stdio.h>

int main() {
    int i;
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    long int hackptr;

    hackptr = (long int)char_array;
    for (i = 0; i < 5; i++) {
        printf("Pointer %ld contains the char %c\n", hackptr, *((char *)hackptr));
        hackptr = hackptr + sizeof(char);
    }

    hackptr = (long int)int_array;
    for (i = 0; i < 5; i++) {
        printf("Pointer %ld contains the int %d\n", hackptr, *((int *)hackptr));
        hackptr = hackptr + sizeof(int);
    }

    return 0;
}