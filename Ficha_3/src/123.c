/*
/*
 ============================================================================
 Name        : Ficha3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	setvbuf(stdout, NULL ,_IONBF, 0);
//================================= Alinea 1 ===============================
	/*
	float p1 = 6;
	float p2 = 10;
	float freq = 8;
	float ntf = (p1*0.3)+(p2*0.3)+(freq*0.4);

	if (ntf < 10){
		printf ("Reprovado : %f", ntf);
	}
	else {
		printf ("Aprovado : %f", ntf);
	}
 */
 //================================= Alinea 2 ===============================
	/*
	 int a;
	 printf("Insira a altura em centimetros: ");
	 scanf("%d", &a);

	 if(a < 150){
		 printf("Estaura baixa");
	 }
	 if(a < 180){
			 printf("Estaura media");
		 }
	 else{
			 printf("Estaura alta");
		 }
*/
 //================================= Alinea 3 ===============================
	/*
	int mes;
	printf("Insira o mes: ");

	scanf("%d", &mes);

	if (mes > 12){
		printf("Insira um valor entre 1 e 12");

	}
	else if(mes == 1){
		printf("Janeiro");
	}
	else if (mes == 2) {
		printf("Fevereiro");
	}
	else if (mes == 3) {
		printf("Março");
		}
	else if (mes == 4) {
		printf("Abril");
		}
	else if (mes == 5) {
		printf("Maio");
		}
	else if (mes == 6) {
		printf("Junho");
		}
	else if (mes == 7) {
		printf("Julho");
		}
	else if (mes == 8) {
		printf("Agosto");
		}
	else if (mes == 9) {
		printf("Setembro");
	}
	else if (mes == 10) {
		printf("Outubro");
	}
	else if (mes == 11) {
		printf("Novenbro");
		}
	else {
		printf("Dezembro");
		}
 */
 //================================= Alinea 4 ===============================
/*
	float operando1 = 2;
	float operando2 = 4;
	char operador  = '^';

	float resultado = 0;

	if(operador == '+'){
		resultado = operando1 + operando2;
	}
	else if(operador == '-'){
			resultado = operando1 - operando2;
		}
	else if(operador == '*'){
			resultado = operando1 * operando2;
			}
	else if(operador == '/'){
			resultado = operando1 / operando2;
			}
	else if(operador == '^'){
				resultado = pow(operando1, operando2);
				}
	printf ("%f %c %f = %f", operando1, operador, operando2, resultado);
*/
 //================================= Alinea 5 ===============================
/*
	int n = 1;
	int soma = 0;
	int target = 100;
	while (n <= target){
		soma+=n;
		n++;
		printf("\nSoma de numeros inteiros ate %d = %d", target, soma);
	}
*/
 //================================= Alinea 6 ===============================
/*
	int val = 0;
	int multiplos = 5;
	int objetivo = 20;
	while (val <= objetivo){
		if (val % multiplos == 0){
			printf("%d\n", val);
		}
		val++;
	}

 /*
	printf("Mutiplos de %d ate %d = 1\n", multiplos, objetivo);
	while (val < objetivo){
		val+=multiplos;
		printf("Mutiplos de %d ate %d = %d\n", multiplos, objetivo, val);
		}
 */

 //================================= Alinea 7 ================================
	int fatorial = 5;
	int n = 5;
	int f = 5;

	while(n <= 1){
		fatorial = fatorial * n;
		n--;
	}
	printf("!%d e %d", f, fatorial);


	return 0;
}
