#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int porta;
    char ip[15];
    float ver;

    printf("Digite a porta: ");
    scanf("%d", &porta);
    printf("Digite o IP: ");
    scanf("%s", ip);
    printf("Digite a versão: ");
    scanf("%f", &ver);

    printf("Porta: %d\n", porta);
    printf("IP: %s\n", ip);
    printf("Versão: %.1f\n", ver);

    return EXIT_SUCCESS;
}