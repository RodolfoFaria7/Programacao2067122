/*
 ============================================================================
 Name        : ficha1_ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//=====================Alinea2==========================
	/*
	int lado = 1;
	int altura = 3;
	int perimetro = 2*(lado+altura);
	printf("%i",perimetro);
	*/
	//=====================Alinea3==========================
	/*
	int a = 5;
	int b = 3;
	int c = 7;
	int d = 10;
	int e = 1;
	float numero = 5.0f;
	float media = (a+b+c+d+e)/numero;
	printf ("A media dos %f \nvalores e: %f ", media, numero);
	*/
	//=====================Alinea4==========================
	/*
	float tempf = 70;
	float tempc = (tempf-32)/1.8f;
	printf ("%.2f fahrennheit sao celcius ",tempf, tempc);
	return EXIT_SUCCESS;
	*/
	//=====================Media de consumo==========================
	/*
	float dist = 370;
	float consumo = 40;
	float km = 100;
	float mediapl = (km*consumo)/dist;
	printf ("A madia do seu veiculo aos %f e %f"), km, mediapl;
	*/
	//=====================Alinea4==========================
	float hora = 8;
	float min = 22;
	float seg = 10;
	float totalseg = (hora*3600)+(min*60)+seg;
	printf("Os segundos sao %f", totalseg);
	return EXIT_SUCCESS;
}
