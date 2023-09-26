#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#define PORT 5000
#define SERVER_IP "127.0.0.1"
#define BUFFER_SIZE 1024
int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char command[BUFFER_SIZE] = {0};
    char buffer[BUFFER_SIZE] = {0};

    printf("Introduce el comando a ejecutar: ");
    fgets(command, BUFFER_SIZE, stdin);
    command[strcspn(command, "\n")] = 0;

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("Error en la creación del socket");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if (inet_pton(AF_INET, SERVER_IP, &serv_addr.sin_addr) <= 0) {
        perror("Error en la dirección del servidor");
        return -1;
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Error en la conexión");
        return -1;
    }

    send(sock, command, strlen(command), 0);
    read(sock, buffer, BUFFER_SIZE);
    printf("Server response:\n%s", buffer);

    close(sock);
    return 0;
}
