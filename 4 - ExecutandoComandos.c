#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Portas TCP Abertas:\n");
    system("netstat -nlpt | grep tcp | awk '{print $4}' | awk -F: '{print $2}' | sort -n | uniq");
    return EXIT_SUCCESS;
}