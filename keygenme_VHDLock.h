/*
 *	Desenvolvimento keygenme do desafio VHDLock (HTB)
 *	Arquivo: keygenme_VHDLock.h
 *	Autor:	 Eduardo Gomes
 *	Data:	 30/04/2023
 *
 */

//____________ Bibliotecas ________________________________
//_________________________________________________________

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//____________ Protótipo das funções ______________________
//_________________________________________________________

int discoveryKey	  (int output_main_1, int output_main_2);
int discoveryOutputDecoder(int keyXor, int output_main);
int discoveryInputDecoder (int output_decoder);


//____________ End Header _________________________________
