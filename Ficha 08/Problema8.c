#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int notas_alunos[15], opcao, escolhido = 0;
	float resultado_media;
	setlocale(LC_ALL, "");
	
	printf("Introduza as notas dos alunos: ");
	for(int i = 0; i < 15; i++) {
		scanf("%d", &notas_alunos[i]);
	}
	
	while(1) {
		printf("\n1) Apresentar a m�dia da turma");
		printf("\n2) Apresentar a nota m�nima");
		printf("\n3) Apresentar a nota m�xima");
		printf("\n4) Apresentar os alunos com classifica��o acima de 15");
		printf("\n5) Apresentar o n�mero de negativas");
		printf("\n6) Apresentar o n�mero de positivas");
		printf("\n7) Apresentar a classifica��o de cada aluno na turma");
		printf("\n8) Alterar a nota de um determinado aluno");
		printf("\n9) Sair do programa\nOp��o: ");
		
		scanf("%d", &opcao);
		escolhido = 0;
		
		switch(opcao) {
		case 1:
			resultado_media = 0.0f;
			for(int i = 0; i < 15; i++)
				resultado_media += notas_alunos[i];
			printf("M�dia: %.1f\n", resultado_media / 15);
			break;
		case 2:
			escolhido = notas_alunos[0];
			printf("A nota m�nima da turma �:");
			for(int i = 0; i < 15; i++) 
				if(escolhido > notas_alunos[i]) escolhido = notas_alunos[i];
			printf("%d", escolhido);
			break;
		case 3:
			escolhido = notas_alunos[0];
			printf("A nota m�xima da turma �: ");
			for(int i = 0; i < 15; i++) 
				if(escolhido < notas_alunos[i]) escolhido = notas_alunos[i];
			break;
		case 4:
			printf("Os seguintes alunos t�m classica��o maior que 15:\n");
			printf("Aluno  Nota");
			for(int i = 0; i < 15; i++) {
				if(notas_alunos[i] > 15 && i > 10) 
					printf("%d      %d", i+1, notas_alunos[i]);
				else if(notas_alunos[i] > 15 && i <= 10)
					printf("%d     %d", i+1, notas_alunos[i]);
			}
			break;
		case 5:
			escolhido = 0;
			for(int i = 0; i < 15; i++)
				if(notas_alunos[i] < 10) escolhido++;
			printf("A turma teve %d negativas\n", escolhido);
			break;
		case 6:
			escolhido = 0;
			for(int i = 0; i < 15; i++)
				if(notas_alunos[i] >= 10) escolhido++;
			printf("A turma teve %d positivas\n", escolhido);
			break;
		case 7:
			printf("Aluno  Nota");
			for(int i = 0; i < 9; i++)
				printf("\n%d      %d", i+1, notas_alunos[i]);
			for(int i = 9; i < 15; i++)
				printf("\n%d     %d", i+1, notas_alunos[i]);
			break;
		case 8:
			printf("Introduza o n�mero do aluno: ");
			scanf("%d", &opcao);
			opcao--;
			printf("\nIntroduza a nova nota: ");
			scanf("%d", &escolhido);
			notas_alunos[opcao] = escolhido;
			printf("Substitu�do com sucesso!\n");
			break;
		case 9:
			exit(0);
			break;
		default:
			printf("N�o inseriu uma op��o v�lida!\n");
		}
		printf("\n");
		system("pause");
	}
	
}
