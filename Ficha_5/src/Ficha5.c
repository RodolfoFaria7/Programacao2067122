/*
 * Ficha5.c
 *
 *  Created on: 11/11/2022
 *      Author: 2067122
 */

#include "Ficha5.h"

void MutiBanco(float lev){
	float saldo = 3000;
	if (lev < saldo){
		float resto = saldo - lev;
		printf ("Levantou %.2f\nSaldo restante: %.2f", lev, resto);
	}
	else {
		printf ("Saldo insuficiente para realizar operacao");
	}


}
/*
void PinTel(){
	int tries = 0;
	float validacao = 1234;
	int pin = 0;

	while (pin != code && tries < 3){
		puts ("Intruduza o Pin:");
		scanf("%d",&pin);

		if (){

		}

	}




}
*/

void TempoTrabalho(int he, int me, int se, int hs, int ms, int ss){

	int HoraEntrada = (he*3600)+(me*60)+(se);

	int HoraSaida = (hs*3600)+(ms*60)+(ss);

	int HorasTrabalho =  HoraSaida - HoraEntrada;

    int h, m, s, resto;

    h = HorasTrabalho / 3600;
    resto = HorasTrabalho % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%d:%d:%d\n", h, m, s);

}
void Adivinha(){
	int t = 0;
	srand((unsigned)time(&t));
	int segredo = rand() % 11;
	int palpite = 0;

	while (palpite != segredo){
		puts("Indique o seu palpite:");
		scanf("%i", &palpite);

		if(palpite == segredo){
			puts("Acertou!!");
			break;
		}else{
			if(palpite > segredo){
				puts("Acima");
			}else{
				puts("Abaixo");
			}
		}
	}
}
