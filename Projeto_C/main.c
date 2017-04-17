/* 
 * File:   main.c
 * Author: franc
 *
 * Created on 12 de Abril de 2017, 15:43
 */

#include <stdio.h>
#include <stdlib.h>
#include "Client.h"

/*
 * 
 */
int main(int argc, char** argv) {

    ListaClientes lista = leClientesDeFicheiro();
    for(int i = 0; i < lista.contagem;i++)
    {
        imprimeCliente(lista.clientes[i]);
    }
    return (EXIT_SUCCESS);
}

