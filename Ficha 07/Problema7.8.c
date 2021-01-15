#include <stdio.h>

int main() {
	int conj_num[10];
	for(int i = 0 ; i < 10; i++)
		scanf("%d", &conj_num[i]);
	for(int i = 0 ; i < 10 ; i++) {
		for(int p = i ; p < 10 ; p++) {
			if(conj_num[i] == conj_num[p] && i != p)
				return 0;
		}
	}
	printf("DIFERENTES");
}
