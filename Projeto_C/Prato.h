
#ifndef PRATO_H
#define PRATO_H

typedef struct{
    char    nomePeca[50];
    char    corPrato[20];
    double  preco;
    int     calorias;
}Prato;

Prato criaPrato(char nomePeca[], char corPrato[], double preco, int calorias);

void imprimePrato (Prato prato);

#endif /* PRATO_H */

