#include <stdio.h>

int main() {
    int vezes;
    char letra;
    letra = getchar();
    scanf("%d", &vezes);
    for(int i = 0; i < vezes; i++) {
        printf("%c", letra);
    }
}