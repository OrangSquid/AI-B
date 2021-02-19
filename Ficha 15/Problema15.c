#include <stdio.h>

int main() {
    int conj_num[4][5], números[20], repetições[20];

    for(int x = 0; x < 4; x++) {
        printf("Introduza os numeros da linha %d\n", x+1);
        for(int y = 0; y < 5; y++) {
            scanf("%d", &conj_num[x][y]);
        }
    }

    // Última posição livre dos repetidos
    int posição_repetidos = 0;
    for(int x = 0; x < 4; x++) {
        for(int y = 0; y < 5; y++) {
            // Defenir no array números o número que vai ser contadas
            // as vezes
            números[posição_repetidos] = conj_num[x][y];
            repetições[posição_repetidos] = 1;
            for(int i = 0; i < 20; i++) {
                if(conj_num[x][y] == números[i] && posição_repetidos != i) {
                    repetições[i]++;
                }
            }
            posição_repetidos++;
        }
    }

    int número_moda = 0;
    int vezes = 0;
    for(int x = 0; x < 20; x++) {
        if(repetições[x] > vezes) {
            número_moda = números[x];
            vezes = repetições[x];
        }
    }
    printf("o valor %d (aparece %d vezes)", número_moda, vezes);
}