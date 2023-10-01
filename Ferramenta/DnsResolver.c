#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <arpa/inet.h> // Inclua este cabeçalho para a função inet_ntoa

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <hostname>\n", argv[0]);
        return 1;
    }

    struct hostent *alvo = gethostbyname(argv[1]);

    if (alvo == NULL) {
        printf("Não foi possível resolver o hostname.\n");
        return 2;
    }

    printf("IP: %s\n", inet_ntoa(*((struct in_addr *)alvo->h_addr)));

    return 0;
}
