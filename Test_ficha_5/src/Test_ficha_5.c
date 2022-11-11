/*
 ============================================================================
 Name        : Test_ficha_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Test.h"

int main(void) {
	float m = Multi(5, 5);
	printf ("%f\n", m);

	float d = Div(5, 5);
	printf ("%f\n", d);

	float a = Add(5, 5);
	printf ("%f\n", a);

	float s = Sub(5, 5);
	printf ("%f", s);
	return 0;
}
