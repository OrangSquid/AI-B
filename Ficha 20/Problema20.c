#include "stdio.h"
#include "stdlib.h"

int main() {
    int sala[20][30], lugares_livres = 600, opção;

    for(int fila = 0; fila < 20; fila++) {
        for(int lugar = 0; lugar < 30; lugar++) {
            sala[fila][lugar] = 0;
        }
    }

    for(;;) {
        printf("\n1) Sair do programa");
        printf("\n2) Realizar marcacao");
        printf("\n3) Cancelar marcacao");
        printf("\n4) Verificar salas");
        printf("\nOpcao: ");
        scanf("%d", &opção);
        system("cls");

        switch(opção) {
            case 1:
                return 0;
            case 2: {
                int bilhetes, fila, lugar;
                printf("Quantos bilhetes quer? ");
                scanf("%d", &bilhetes);
                for(int bilhete = 0; bilhete < bilhetes; bilhete++) {
                    printf("Fila do bilhete %d? ", bilhete+1);
                    scanf("%d", &fila);
                    printf("Lugar do bilhete %d? ", bilhete+1);
                    scanf("%d", &lugar);
                    if(fila >= 1 && fila <= 20 && lugar >= 1 && lugar <= 30 && lugares_livres > 0) {
                        sala[fila-1][lugar-1] = 1;
                        lugares_livres--;
                        printf("Reserva efectuada com sucesso!\n");
                    }
                    else {
                        printf("A operacao falhou!\n");
                    }
                }
                break;
            }
            case 3: {
                int bilhetes, fila, lugar;
                printf("Quantos bilhetes quer cancelar? ");
                scanf("%d", &bilhetes);
                for(int bilhete = 0; bilhete < bilhetes; bilhete++) {
                    printf("Fila do bilhete %d? ", bilhete+1);
                    scanf("%d", &fila);
                    printf("Lugar do bilhete %d? ", bilhete+1);
                    scanf("%d", &lugar);
                    if(fila >= 1 && fila <= 20 && lugar >= 1 && lugar <= 30 && lugares_livres > 0) {
                        sala[fila-1][lugar-1] = 0;
                        lugares_livres++;
                        printf("Cancelamento efectuado com sucesso!\n");
                    }
                    else {
                        printf("A operacao falhou!\n");
                    }
                }
                break;
            }
            case 4:
                printf("Legenda:\n");
                printf("- Livre\n");
                printf("O Reservado\n\n");
                printf("*******");
                for(int x = 1; x < 10; x++) {
                    printf("***%d", x);
                }
                for(int x = 10; x < 31; x++) {
                    printf("**%d", x);
                }
                for(int fila = 0; fila < 20; fila++) {
                    if(fila <= 8) printf("\nFila 0%d", fila+1);
                    else printf("\nFila %d", fila+1);

                    for(int lugar = 0; lugar < 30; lugar++) {
                        if(sala[fila][lugar]) printf(" * O");
                        else printf(" * -");
                    }
                }
                printf("\nLugares Livres: %d\n", lugares_livres);
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }
}