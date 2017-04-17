
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "prato.h"

Prato criaPrato(char nomePeca[], char corPrato[], double preco, int calorias){
    Prato prato;
    
    strcpy(prato.nomePeca, nomePeca); // copia o conteúdo do 2º p/ o 1º
    strcpy(prato.corPrato, corPrato); // copia o conteúdo do 2º p/ o 1º
    
    prato.preco = preco;
    prato.calorias = calorias;
    
    return prato;
}

void imprimePrato (Prato prato){
        printf("%s [%d calorias] - prato %s (%.2f€) \n",
           prato.nomePeca, 
           prato.calorias, 
           prato.corPrato, 
           prato.preco);
}
