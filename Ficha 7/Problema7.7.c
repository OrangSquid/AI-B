#include <stdio.h>

int main() {
	int conj_num[10], comparador_primeiro, comparador_ultimo;
	for(int i = 0 ; i < 10; i++)
		scanf("%d", &conj_num[i]);
	for(int i = 0 ; i < 10 ; i++) {
		if(conj_num[i] >= conj_num[0] && conj_num[i] <= conj_num[9])
			conj_num[i] = 0;
		else if(conj_num[i] <= conj_num[0] && conj_num[i] >= conj_num[9])
			conj_num[i] = 0;
	}
	printf("\n");
	for(int i = 0 ; i < 10 ; i++)
		printf("%d\n", conj_num[i]);
}
