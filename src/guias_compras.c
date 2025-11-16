#include <stdio.h>
#include "funcoes.h"

void guiaCompras() { // Usei 'void' porque esta função não precisa devolver nenhum valor. Ela apenas mostra o texto na tela. Como não há retorno para o main. 
    puts("===== GUIA DE COMPRAS VEGANAS ====="); // usei apenas puts para mostrar em texto o que o usario deve comprar para seguir uma dieta vegana não nada muito complexio daria pra fazer com printf tambem 

    puts("--- Basicos ---");
    puts("- Arroz integral");
    puts("- Feijao preto ou lentilha");
    puts("- Macarrao sem ovos");

    puts("--- Proteinas ---");
    puts("- Tofu");
    puts("- Proteína Vegetal Texturizada");
    puts("- Grao de Bico");
    puts("- Lentilha");

    puts("--- Leites vegetais ---");
    puts("- Leite de amendoas");
    puts("- Leite de soja");
    puts("- Leite de aveia");

    puts("--- Hortifruti ---");
    puts("- Cenoura");
    puts("- Tomate");
    puts("- Abobrinha");
    puts("- Banana");
    puts("- Maçã");

    puts("--- Temperos saudaveis ---");
    puts("- Açafrao");
    puts("- Papric");
    puts("- Oregano");
    puts("- Chimichurri");

    puts("\nFim do guia!\n");
}

//Codigo mostra o guia de compras veganas com intes para ele fazer compras -  codigo simples sem muitas interção só pra ele ter uma noção do que comprar 
