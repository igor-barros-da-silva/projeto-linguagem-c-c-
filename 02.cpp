#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 02 - Desenvolkva um programa em C que peça duas strings, uma maior e uma menor, você pode definir tamanho. 
		Após verifique se existe a ocorrência da segunda dentro da primeira. */

int main() {

	char STR[20], STR1[20], *x;
	
	printf("Digite uma string:");
	gets(STR);
	
	printf("Digite outra string");
	gets(STR1);
	
	x = strstr(STR, STR1);
	
	printf("% Sua busca %", x);
}
