#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 01 - Fazer um programa que peça duas strings de tamanho 20 e compare os conteúdos digitados informando se os mesmos são iguais. */

int main() {

	char STR[20], STR1[20];
	
	printf("Digite uma string:");
	gets(STR);
	
	printf("Digite outra string");
	gets(STR);
	
	if(strcmp(STR, STR1)) {
		printf("Sao iguais.");
	}
}
