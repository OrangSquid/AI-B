#include <stdio.h>

int main() {
    int conj_num[4][5];
    for(int x = 0; x < 4; x++) {
        printf("Introduza os numeros da linha %d\n", x+1);
        for(int y = 0; y < 5; y++) {
            scanf("%d", &conj_num[x][y]);
        }
    }
         
    int somatorio_linha = 0;
    for(int x = 0; x < 4; x++) {
        for(int y = 0; y < 5; y++) {
            somatorio_linha += conj_num[x][y];
        }
        if(somatorio_linha > 25) {
            printf("linha %d; ", x+1);
        }
        somatorio_linha = 0;
    }
    
    int somatorio_coluna = 0;
    for(int y = 0; y < 5; y++) {
        for(int x = 0; x < 4; x++) {
            somatorio_coluna += conj_num[x][y];
        }
        if(somatorio_coluna > 25) {
            printf("coluna %d; ", y+1);
        }
        somatorio_coluna = 0;
    }
}