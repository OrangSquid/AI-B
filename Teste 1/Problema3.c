#include <stdio.h>
#include <string.h>

int main() {
    char letra, texto[88];
    gets(texto);
    letra = getchar();
    for(int i = 0; i < strlen(texto); i++) {
        if(letra == texto[i]) {
            printf("APARECE");
            break;
        }
    }
}