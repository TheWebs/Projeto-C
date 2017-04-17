#include "Client.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

Client createClient(char * name, char * surname, int age)
{
    Client client;
    strcpy(client.name, name);
    strcpy(client.surname, surname);
    client.age = age;
    client.id = strlen(name) + strlen(surname) + age;
    client.pontos = 0;
    return client;
}

void imprimeCliente(Client cliente)
{
        printf("Numero: %d\nNome: %s\nApelido: %s\nIdade: %d\nPontos: %d\n", cliente.id, cliente.name, cliente.surname, cliente.age, cliente.pontos);
}

ListaClientes leClientesDeFicheiro()
{
    ListaClientes lista;
    char linha[100];
    char** tokens;
    FILE *f = fopen("clientes.txt", "r");
    int counter = getNumberClients();
    lista.clientes = (Client *)malloc(counter*sizeof(Client));
    lista.contagem = counter;
    int i = 0;
    while(fgets(linha, sizeof(linha), f))
    {
        if(strlen(linha) <= 1) continue;
        tokens = split(linha, 4, " ");
        lista.clientes[i] = createClient(tokens[1], tokens[2], atoi(tokens[3]));
        lista.clientes[i].id = atoi(tokens[0]);
        i++;
    }
    return lista;
    
}

int getNumberClients()
{
    char linha[100];
    char** tokens;
    FILE *f = fopen("clientes.txt", "r");
    int counter = 0;
    while(fgets(linha, sizeof(linha), f))
    {
        if(strlen(linha) <= 1) continue;
        tokens = split(linha, 4, " ");
        counter++;
    }
    return counter;
}

char** split(char *string, int nFields, const char *delim)
{
    char **tokens = malloc(sizeof(char*) *nFields);
    char index = 0;
    char *p = strtok(string, delim);
    while(p != NULL)
    {
        tokens[index++] = p;
        p = strtok(NULL, delim);
    }
    return tokens;
}

