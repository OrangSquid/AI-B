#include <stdio.h>

int main() {
    int matriz[5][5];

    for(int x = 0; x < 5; x++) {
        printf("Introduza os numeros da linha %d\n", x+1);
        for(int y = 0; y < 5; y++) {
            scanf("%d", &matriz[x][y]);
        }
    }

    for(int nova_coluna = 0; nova_coluna < 5; nova_coluna++) {
        for(int nova_linha = 0; nova_linha < 5; nova_linha++) {
            printf("%d ", matriz[nova_linha][nova_coluna]);
        }
        printf("(linha %d)\n", nova_coluna+1);
    }
}