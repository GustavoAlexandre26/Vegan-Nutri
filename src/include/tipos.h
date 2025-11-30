#ifndef TIPOS_H
#define TIPOS_H

//Arquivo que guarda todas as structs utilizadas no projeto.
//Nossa struct se chama Alimento, que representa um alimento vegano com as informações mais simples.

typedef struct {
    char nome [50];
    int proteina;
    int carbo;
    int kcal;
} Alimento;

#endif