#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int notas_alunos[15], opcao, escolhido;
	float resultado_media;
	setlocale(LC_ALL, "");
	
	printf("Introduza as notas dos alunos: ");
	for(int i = 0; i < 15; i++) {
		scanf("%d", &notas_alunos[i]);
	}
	
	while(1) {
		printf("\n1) Apresentar a média da turma");
		printf("\n2) Apresentar a nota mínima");
		printf("\n3) Apresentar a nota máxima");
		printf("\n4) Apresentar os alunos com classificação acima de 15");
		printf("\n5) Apresentar o número de negativas");
		printf("\n6) Apresentar o número de positivas");
		printf("\n7) Apresentar a classificação de cada aluno na turma");
		printf("\n8) Alterar a nota de um determinado aluno");
		printf("\n9) Sair do programa\nOpção: ");
		
		scanf("%d", &opcao);
		escolhido = 0;
		
		switch(opcao) {
		case 1:
			resultado_media = 0.0f;
			for(int i = 0; i < 15; i++)
				resultado_media += notas_alunos[i];
			printf("Média: %.1f\n", resultado_media / 15);
			break;
		case 2:
			escolhido = notas_alunos[0];
			printf("A nota mínima da turma é:");
			for(int i = 0; i < 15; i++) 
				if(escolhido > notas_alunos[i]) escolhido = notas_alunos[i];
			printf("%d", escolhido);
			break;
		case 3:
			escolhido = notas_alunos[0];
			printf("A nota máxima da turma é: ");
			for(int i = 0; i < 15; i++) 
				if(escolhido < notas_alunos[i]) escolhido = notas_alunos[i];
			break;
		case 4:
			printf("Os seguintes alunos têm classicação maior que 15:\n");
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
			printf("Introduza o número do aluno: ");
			scanf("%d", &opcao);
			opcao--;
			printf("\nIntroduza a nova nota: ");
			scanf("%d", &escolhido);
			notas_alunos[opcao] = escolhido;
			printf("Substituído com sucesso!\n");
			break;
		case 9:
			exit(0);
			break;
		default:
			printf("Não inseriu uma opção válida!\n");
		}
		printf("\n");
		system("pause");
	}
	
}
