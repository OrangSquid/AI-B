#include <stdio.h>

int main() {
    int conj_num[5][5];

    for(int x = 0; x < 5; x++) {
        printf("Introduza os numeros da linha %d\n", x+1);
        for(int y = 0; y < 5; y++) {
            scanf("%d", &conj_num[x][y]);
        }
    }

    // Diagonal superior esquerdo a inferior direito
    int diagonal_se_id = 0;
    for(int x = 0; x < 5; x++) {
        for(int y = 0; y < 5; y++) {
            if(x == y) diagonal_se_id += conj_num[x][y];
        }
    }

    // Diagonal inferior esquerdo a superior direito
    int diagonal_ie_sd = 0;
    for(int x = 4; x >= 0; x--) {
        for(int y = 0; y < 5; y++) {
            if(x == 4 - y) diagonal_ie_sd += conj_num[x][y];
        }
    }
    printf("diagonal superior esquerdo a inferior direito: %d\n", diagonal_se_id);
    printf("diagonal inferior esquerdo a superior direito: %d\n", diagonal_ie_sd);
}