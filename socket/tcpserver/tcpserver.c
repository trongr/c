#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in server_addr = {
        .sin_family = AF_INET,
        .sin_port = htons(9001),
        .sin_addr.s_addr = INADDR_ANY};

    bind(sock, (struct sockaddr *)&server_addr, sizeof(server_addr));
    listen(sock, 5);

    int client = accept(sock, NULL, NULL);
    char msg[256] = "Hello there!";
    send(client, msg, sizeof(msg), 0);

    close(sock);
    return 0;
}