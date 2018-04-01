#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in server_addr = {
        .sin_family = AF_INET,
        .sin_port = htons(9001),
        .sin_addr.s_addr = INADDR_ANY}; // Does this work?

    if (connect(sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1) {
        printf("ERROR connecting to remote socket");
    }

    char res[256];
    recv(sock, &res, sizeof(res), 0);
    printf("Response: %s\n", res);

    close(sock);
    return 0;
}