#include <stdio.h>
#include <string.h>

int main() {
    char message[100] = "Hello, world!";

    printf("Repeat how many times? ");
    int count;
    scanf("%d", &count);

    int i;
    for (i = 0; i < count; i++)
        printf("%3d - %s\n", i, message);

    return 0;
}