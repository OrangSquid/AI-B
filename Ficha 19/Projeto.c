#include "stdio.h"
#include "locale.h"
#include "stdlib.h"

int main() {
    // Sala, Sessão
    int cinema[10][5];
    int sala, sessão, bilhetes, opção;

    setlocale(LC_ALL, "");

    for(int sala = 0; sala < 10; sala++) {
        for(int sessão = 0; sessão < 5; sessão++) {
            cinema[sala][sessão] = 0;
        }
    }

    for(;;) {
        printf("1) Sair do Programa\n");
        wprintf(L"2) Realizar uma marcação\n");
        wprintf(L"3) Verificar lugares disponíveis\n");
        printf("4) Novo dia\n\n");
        wprintf(L"Opção: ");
        scanf("%d", &opção);
        system("cls");

        switch(opção) {
            case 1:
                return;
            case 2:
                printf("Quantos bilhetes pretende? ");
                scanf("%d", &bilhetes);
                printf("Para que sala? ");
                scanf("%d", &sala);
                sala--;
                printf("Para que sessao? ");
                scanf("%d", &sessão);
                sessão--;
                if(sala < 10 && sala > -1 && sessão < 5 && sessão > -1) {
                    if(cinema[sala][sessão] + bilhetes < 30) {
                        cinema[sala][sessão] += bilhetes;
                        wprintf(L"Marcação efetuada com sucesso!\n\n");
                    }
                    else wprintf(L"Não há lugares suficientes para tantos bilhetes\n\n");
                }
                else wprintf(L"A operação falhou!\n\n");
                break;
            case 3:
                printf("Que sala quer ver? ");
                scanf("%d", &sala);
                printf("Sala %d (lugares livres)", sala);
                sala--;
                if(sala < 10 && sala > -1) {
                    for(int x = 0; x < 5; x++) {
                        wprintf(L"\nSessão %d: %d", x+1, 30 - cinema[sala][x]);
                    }
                }
                else wprintf(L"Sala inválida!");
                printf("\n\n");
                break;
            case 4:
                for(int sala = 0; sala < 10; sala++) {
                    for(int sessão = 0; sessão < 5; sessão++) {
                        cinema[sala][sessão] = 0;
                    }
                }
                wprintf(L"Hoje é um novo dia\n");
                printf("As salas foram limpas\n\n");
                break;
            default:
                wprintf(L"A opção escolhida não é válida\n\n");
        }
    }
}