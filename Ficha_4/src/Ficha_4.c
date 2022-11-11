/*
/*
 ============================================================================
 Name        : Primeira_função.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//============================== Alinea 1 ===================================
float Volumedocilindro(float raio, float altura){
	float areadabase = M_PI * pow(raio, 2);
	float volume = areadabase * altura;
	return volume;
}
//=============================== Alinea 2 ==================================
float IMC (float peso, float altura){
	float imc = peso / pow(altura, 2);
	return imc;
}
void mensagemIMC (float imc2){
	if(imc2 < 18.5 ){
			printf ("Abaixo do peso");
			}
		else if(imc2 < 25 ){
			printf ("Peso normal");
			}
		else if(imc2 < 30 ){
			printf ("Acima do peso");
			}
		else if(imc2 > 30  ){
			printf ("Obeso");
			}
}
//============================== Alinea 3 ===================================
void drawLine (int whith){
	for(int i = 0; i < whith; i++){
		printf ("%c", '*');
	}
}
void drawRectangle (int hight, int whith){
	for(int i = 0; i < hight; i++){
		drawLine(whith);
		printf ("\n");
	}
}
//============================== Alinea 4 ===================================
void drawTriangle (int hight){
	int whith = 1;
	for(int i = 0; i < hight; i++){
		drawLine(whith);
		whith ++;
		printf ("\n");
	}
}
//============================== Alinea 5 ===================================
void drawbox (int hight, int whith){
	for (int i = 0; i < hight; i++){
		for (int j = 0; j < whith; j++){
			if(i == 0 || i == hight - 1 || j == 0 || j == whith - 1){
				printf ("%c", '*');
			}
			else {
				printf ("%c", ' ');
			}
		}
	}
}

int main(void) {
	setvbuf(stdout, NULL ,_IONBF, 0);
//============================== Alinea 1 ===================================
	/*
	float raio = 2;
	float altura = 4;
	float volumec = Volumedocilindro(raio, altura);
	printf("O cilindro de raio %f e a altura %f tem o volume %f", raio, altura, volumec);
	*/
//============================== Alinea 2 ===================================
	/*
	float peso = 58;
	float altura = 1.70;
	float imc2 = IMC(peso, altura);

	printf ("O IMC de uma pessoa com %f de altura e %f de peso e: %f\n", altura, peso, imc2);

	mensagemIMC(imc2);
	*/
//============================== Alinea 3 ===================================
	/*
	int altura;
	int largura;
	printf ("Desenha Retangulos");
	printf ("Insira a altura:");
	scanf ("%d", & altura);
	printf ("Insira a largura:");
	scanf ("%d", & largura);
	drawRectangle(altura,largura);
	*/
//============================== Alinea 4 ===================================
	/*
	drawTriangle(5);
	*/
//============================== Alinea 5 ===================================
	drawbox(5, 5);
	return 0;
}
