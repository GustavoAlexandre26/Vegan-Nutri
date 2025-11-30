#include <stdio.h> // Adicionado para usar puts e printf
#include "menu.h"  // Garante a declaração da função

void exibirMenu() { // <<<<<< ENVOLVA TODO O CÓDIGO AQUI
        puts("========================="); 
        puts("      VEGAN NUTRI        ");
        puts("=========================");
        puts("Cardapio de substituicoes veganas:");
        puts("--------------------------");
        puts("1 - leite");
        puts("2 - Ovo");
        puts("3 - Carne");
        puts("4 - Frango");
        puts("5 - Sobremesas");
        puts("6 - Montar Refeicao");
        puts("7 - Guias de Compras");
        puts("--------------------------");
        printf("\n");
        puts("Ser vegano e escolher, todos os dias, construir um mundo mais leve, compassivo e cheio de vida, comecando pelo prato e transbordando para o coracao.\n");
        printf("\n");
        printf("Escolha uma opcao (escolha entre 0 a 7): ");
} // <<<<<< FIM DA FUNÇÃO