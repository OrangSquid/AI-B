#include <stdio.h>

int main() {
	int conj_num[10], comparador, contagem_maiores = 0;
	for(int i = 0 ; i < 10; i++) {
		scanf("%d", &conj_num[i]);
		if(i == 9) {
			comparador = conj_num[i];
		}
	}
	for(int i = 0 ; i < 10 ; i++) {
		if(conj_num[i] >= comparador) {
			contagem_maiores++;
		}
	}
	printf("\n %d", contagem_maiores);
}













