#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 03 - Fazer um programa que permita entrar com vários números positivos e imprimir a média dos números digitados.
		O programa será encerrado quando um número negativo for digitado. */

int main() {

	float num, media, total = 0, quantidade = 0;
	
	do {
		printf("Digite um numero:");
		scanf("%f", num);
		
		if(num > 0) {
			total = total + num;
			quantidade ++;
		}
		
	} while(num < 0);
		
		media = total / quantidade;
		
		printf("A media eh: %2f", media);
}
