#include <stdio.h>

int main() {
	int conj_num[10], menor;
	for(int i = 0 ; i < 10; i++) {
		scanf("%d", &conj_num[i]);
	}
	menor = conj_num[0];
	for(int i = 0 ; i < 10 ; i++) {
		if(menor % 2 != 0 || (conj_num[i] % 2 == 0 && conj_num[i] > menor)) {
			menor = conj_num[i];
		}
	}
	printf("%d", menor);
}
