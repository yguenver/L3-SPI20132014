#include <stdio.h>
#include <stdlib.h>
#include "Alex.h"

int main(){
	
	printf("Démarrage du programme d'analyse lexicale\n");
	
	AlexAmorcer();
	AlexReconnaitre();
	lireChaineLexicale();
	
	printf("Fin du programme d'analyse lexicale\n");
	return EXIT_SUCCESS;
}