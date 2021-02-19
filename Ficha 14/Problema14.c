#include <stdio.h>

int main() {
    int conj_num[4][5];
    for(int x = 0; x < 4; x++) {
        printf("Introduza os numeros da linha %d\n", x+1);
        for(int y = 0; y < 5; y++) {
            scanf("%d", &conj_num[x][y]);
        }
    }

    for(int x = 0; x < 4; x++) {
        // Percorrer a linha
        for(int y = 0; y < 5; y++) {
            // Percorrer a linha outra vez
            int saltar_linha = 0;
            for(int z = 0; z < 5; z++) {
                if(conj_num[x][y] == conj_num[x][z] && y != z) {
                    printf("linha %d; ", x+1);
                    saltar_linha = 1;
                    break;
                }
            }
            if(saltar_linha) break;
        }
    }

    for(int y = 0; y < 5; y++) {
        // Percorrer a coluna
        for(int x = 0; x < 4; x++) {
            // Percorrer a coluna outra vez
            int saltar_coluna = 0;
            for(int z = 0; z < 4; z++) {
                if(conj_num[x][y] == conj_num[z][y] && x != z) {
                    printf("coluna %d; ", y+1);
                    saltar_coluna = 1;
                    break;
                }
            }
            if(saltar_coluna) break;
        }
    }
}