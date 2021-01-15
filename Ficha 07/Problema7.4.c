#include <stdio.h>

int main() {
	int conj_num[10], maior;
	for(int i = 0 ; i < 10; i++) {
		scanf("%d", &conj_num[i]);
	}
	for(int i = 0 ; i < 10 ; i++) {
		if((maior == NULL && conj_num[i] % 2 == 0) || (conj_num[i] % 2 == 0 && conj_num[i] < maior)) {
			maior = conj_num[i];
		}
	}
	printf("%d", maior);
}
