#include "stdio.h"

int main(){
    int comprimento, largura;
    scanf("%d", &comprimento);
    scanf("%d", &largura);
    for(int x = 0; x < comprimento; x++) {
        for(int y = 0; y < largura; y++) {
            printf("+");
        }
        printf("\n");
    }
}