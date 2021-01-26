#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    if(x + y > 20 && x + y < 20) {
        printf("ACERTOU");
    }
}