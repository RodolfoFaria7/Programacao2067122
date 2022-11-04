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
int LarguraDoRetangulo(largura1, largura2){

}

int main(void) {
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

	return 0;
}
