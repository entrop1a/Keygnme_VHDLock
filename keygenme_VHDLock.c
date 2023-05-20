/*
 *	Desenvolvimento keygenme do desafio VHDLock (HTB)
 *	Arquivo: keygenme_VHDLock.c
 *	Autor:	 Eduardo Gomes
 *	Data:	 30/04/2023
 *
 */

//____________ Biblioteca _________________________________
//_________________________________________________________

#include "keygenme_VHDLock.h"


//____________ Desenvolvimento das funções ________________
//_________________________________________________________

int discoveryKey(int output_main_1, int output_main_2){

	int counter_1, counter_2, counter_3 = 0;

	int aux_out1[15];
	int aux_out2[15];
	
	//aux_out1 = malloc(sizeof(long int));
	//aux_out2 = malloc(sizeof(long int));

	int decoder = 0;
	int result = 0;

	int len1 = 15;

	for(counter_1 = 0; counter_1 <= len1; counter_1++){
		decoder = (1 << counter_1);
		aux_out1[counter_1] = output_main_1 ^ decoder;
		aux_out2[counter_1] = output_main_2 ^ decoder;
	}
	
	for(counter_2 = 0; counter_2 <= len1; counter_2++){
		for(counter_3 = 0; counter_3 <= len1; counter_3++){
			if(aux_out1[counter_2] == aux_out2[counter_3]) return aux_out1[counter_2];
		}
	}

}


int discoveryOutputDecoder(int keyXor, int output_main){

	return keyXor ^ output_main;

}


int discoveryInputDecoder(int output_decoder){
	
	int result; 

	switch(output_decoder){
		
		case 1:
			result = 0;
			break;
		case (1 << 1):
			result = 1;
			break;
		case (1 << 2):
			result = 2;
			break;
		case (1 << 3):
			result = 3;
			break;

		case (1 << 4):
			result = 4;
			break;

		case (1 << 5):
			result = 5;
			break;

		case (1 << 6):
			result = 6;
			break;

		case (1 << 7):
			result = 7;
			break;

		case (1 << 8):
			result = 8;
			break;

		case (1 << 9):
			result = 9;
			break;

		case (1 << 10):
			result = 10;
			break;

		case (1 << 11):
			result = 11;
			break;

		case (1 << 12):
			result = 12;
			break;

		case (1 << 13):
			result = 13;
			break;

		case (1 << 14):
			result = 14;
			break;

		case (1 << 15):
			result = 15;
			break;
		
	}

	return result;

}


