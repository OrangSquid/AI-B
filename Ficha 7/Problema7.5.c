#include <stdio.h>

int main() {
	int conj_num[10], comparador;
	for(int i = 0 ; i < 10; i++) {
		scanf("%d", &conj_num[i]);
		if(i == 9) {
			comparador = conj_num[i];
		}
	}
	for(int i = 0 ; i < 10 ; i++) {
		if(conj_num[i] >= comparador) {
			conj_num[i] = 0;
		}
	}
	printf("\n");
	for(int i = 0 ; i < 10 ; i++) {
		printf("%d\n", conj_num[i]);
	}
}
