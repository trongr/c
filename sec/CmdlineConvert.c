#include <stdio.h>
#include <stdlib.h>

/**
 * Print usage.
 */
void usage(char *program_name) {
    printf("Usage: %s <message> <# of times to repeat>\n", program_name);
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        usage(argv[0]);
        exit(1);
    }

    int count = atoi(argv[2]); // Convert the 2nd arg into an integer.
    printf("Count is %d\n", count);
    printf("Repeating %d times..\n", count);
    for (int i = 0; i < count; i++)
        printf("%3d - %s\n", i, argv[1]); // Print the 1st arg.
}