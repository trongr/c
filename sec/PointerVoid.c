#include <stdio.h>

int main() {
    int i;
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};
    void *voidptr;

    voidptr = (void *)char_array;
    for (i = 0; i < 5; i++) {
        printf("[Void pointer] points to %p, which contains the char %c\n", voidptr, *((char *)voidptr));
        voidptr = (void *)((char *)voidptr + 1);
    }

    voidptr = (void *)int_array;
    for (i = 0; i < 5; i++) {
        printf("[Void pointer] points to %p, which contains the int %d\n", voidptr, *((int *)voidptr));
        voidptr = (void *)((int *)voidptr + 1);
    }

    return 0;
}