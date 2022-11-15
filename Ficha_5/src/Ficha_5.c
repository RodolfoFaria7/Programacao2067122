/*
 ============================================================================
 Name        : Ficha_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Ficha5.h"

int main(void) {
	setvbuf(stdout, NULL ,_IONBF, 0);
	//============================================== Alinea 1 ========================================
	//MutiBanco(100);
	//============================================== Alinea 2 ========================================
	int pin;
    printf("Insira o pin: ");
	scanf("%d", &pin);
	PinTel(pin);
	return 0;
}
