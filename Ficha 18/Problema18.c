#include <stdio.h>

int main() {
    int matriz[5][5], matriz_transposta[5][5];

    for(int x = 0; x < 5; x++) {
        printf("Introduza os numeros da linha %d\n", x+1);
        for(int y = 0; y < 5; y++) {
            scanf("%d", &matriz[x][y]);
        }
    }

    for(int nova_linha = 0; nova_linha < 5; nova_linha++) {
        for(int nova_coluna = 0; nova_coluna < 5; nova_coluna++) {
            matriz_transposta[nova_linha][nova_coluna] = matriz[nova_coluna][nova_linha];
        }
    }

    int é_simétrica = 1;
    for(int x = 0; x < 5; x++) {
        for(int y = 0; y < 5; y++) {
            if(matriz[x][y] != matriz_transposta[x][y]) é_simétrica = 0;
        }
    }

    if(é_simétrica) printf("simetrica");
}