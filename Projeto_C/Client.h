/* 
 * File:   Client.h
 * Author: franc
 *
 * Created on 12 de Abril de 2017, 15:47
 */
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef CLIENT_H
#define	CLIENT_H


typedef struct Client {
    int id;
    int pontos;
    char * name;
    char * surname;
    int age;
    //falta atributo com fila de refeicoes
}Client;

typedef struct ListaClientes {
    int contagem;
    Client *clientes;
}ListaClientes;

Client createClient(char * name, char * surname, int age);
char** split(char *string, int nFields, const char *delim);
ListaClientes leClientesDeFicheiro();
void imprimeCliente(Client cliente);
int getNumberClients();

#endif	/* CLIENT_H */

