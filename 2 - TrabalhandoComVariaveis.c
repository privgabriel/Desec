#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int porta = 80;
    char ip[] = "192.168.0.1";
    float ver = 1.1;

    printf("Porta: %d\n", porta);
    printf("IP: %s\n", ip);
    printf("Versão: %.1f\n", ver);

    return EXIT_SUCCESS;
}