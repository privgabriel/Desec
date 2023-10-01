#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int index;

    char *ip;

    ip = argv[1];

    if (argc < 2){
        printf("Modo de uso: <IP> <PORTA>\n");
    }
    else {
        for (index = 0; index <= 10; index++) {
            printf("Varrendo Porta %d\n", index);
        }
        printf("Varrendo Host %s\n", argv[1]);
    }
    return 0;
}