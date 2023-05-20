/*
 *	Desenvolvimento keygenme do desafio VHDLock (HTB)
 *	Arquivo: main.c
 *	Autor:	 Eduardo Gomes
 *	Data:	 30/04/2023
 *
 */

//____________ Biblioteca _________________________________
//_________________________________________________________

#include "keygenme_VHDLock.h"


//____________ Função Principal ___________________________
//_________________________________________________________

int main(int argc, char *argv[]){

	int out1 = atoi(argv[1]);
	int out2 = atoi(argv[2]);
	
	int key = discoveryKey(out1, out2);

	int decoder1 = discoveryOutputDecoder(key, out1);
	int decoder2 = discoveryOutputDecoder(key, out2);

	int input1 = discoveryInputDecoder(decoder1);
	int input2 = discoveryInputDecoder(decoder2);

	printf("Output1: %i\n", out1);
	printf("Output2: %i\n", out2);
	printf("key: %i\n", key);
	printf("decoder1: %i\n", decoder1);
	printf("decoder2: %i\n", decoder2);
	printf("Input1: %i\n", input1);
	printf("Input2: %i\n", input2);

	return 0;

}
