#include <stdio.h>

int main() {
    int i;
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};
    char *char_pointer = char_array;
    int *int_pointer = int_array;
    for (i = 0; i < 5; i++) { // Iterate through the int array with the int_pointer.
        printf("[integer pointer] points to %p, which contains the integer %d\n", int_pointer, *int_pointer);
        // printf("The 'int pointer' data type is\t\t %lu bytes\n", sizeof(int_pointer));
        int_pointer++;
    }
    for (i = 0; i < 5; i++) { // Iterate through the char array with the char_pointer.
        printf("[char pointer] points to %p, which contains the char '%c'\n", char_pointer, *char_pointer);
        // printf("The 'char pointer' data type is\t\t %lu bytes\n", sizeof(char_pointer));
        char_pointer++;
    }
    return 0;
}