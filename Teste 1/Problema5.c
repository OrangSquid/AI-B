#include <stdio.h>
#include <string.h>

int main() {
    char texto1[100], texto2[100], aparece[100] = "", apresentado[100] = "";
    gets(texto1);
    gets(texto2);
    if(strlen(texto1) > strlen(texto2)) {
        for(int x = 0; x < strlen(texto1); x++) {
            for(int y = 0; y < strlen(texto2); y++) {
                if(texto1[x] == texto2[y]) {
                    aparece[strlen(aparece)] = texto2[x];
                }
            }
        }
    }
    else {
        for(int x = 0; x < strlen(texto2); x++) {
            for(int y = 0; y < strlen(texto1); y++) {
                if(texto2[x] == texto1[y]) {
                    aparece[strlen(aparece)] = texto2[x];
                }
            }
        }
    }
    int apresentar = 1;
    for(int x = 0; x < strlen(aparece); x++) {
        for(int y = 0; y < strlen(apresentado); y++) {
            if(aparece[x] == apresentado[y]) {
                apresentar = 0;
            }
        }
        if(apresentar) {
            printf("%c ", aparece[x]);
            apresentado[strlen(apresentado)] = aparece[x];
        }
        apresentar = 1;
    }
}