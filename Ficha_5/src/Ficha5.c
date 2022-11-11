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
