#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <endereço IP>\n", argv[0]);
        return 1;
    }

    int meuSocket;
    int conecta;
    int porta;
    int inicio = 1;
    int final = 65535;
    char *destino = argv[1];

    struct sockaddr_in alvo;

    for (porta = inicio; porta <= final; porta++) {

        meuSocket = socket(AF_INET, SOCK_STREAM, 0);
        alvo.sin_family = AF_INET;
        alvo.sin_port = htons(porta);
        alvo.sin_addr.s_addr = inet_addr(destino);

        conecta = connect(meuSocket, (struct sockaddr *) &alvo, sizeof alvo);

        if (conecta == 0) {
            printf("Porta %d - status [ABERTA]\n", porta);
            close(meuSocket);
        } else {
            close(meuSocket);
        }
    }

    return 0;
}
