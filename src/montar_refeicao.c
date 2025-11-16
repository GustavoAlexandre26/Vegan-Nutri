#include <stdio.h>
#include "funcoes.h"

void montarRefeicao() { 
    // Usei 'void' porque esta função só exibe informações na tela,
    // ela não precisa retornar nada para o main.

    int prato =10; //variável que recebe a escolha do usuário

   
        puts("=========================");
        puts("      Montar Refeicao    ");
        puts("=========================");
        puts("Vamos criar sua refeicao Vegana:");
        puts("1 - Carboidrato (arroz, quinoa ou macarrao)");
        puts("2 - Feijao ou lentilha");
        puts("3 - Proteina vegetal");
        puts("4 - Salada");
        puts("0 - Voltar ao menu");
        printf("Opcao: ");

        while (prato != 0) { // repete até o usuário escolher 0. 

        scanf("%d", &prato);

        if (prato == 1) {  // Se o usuário digitou 1, mostramos os carboidratos.
            puts("Carboidratos disponiveis:");
            puts("- Arroz integral (100g): 2.6g proteina | 23g carboidratos | 1g fibras | 110 kcal");
            puts("- Quinoa cozida (100g): 4g proteina | 19g carboidratos | 2g gordura | 120 kcal");
            puts("- Macarrao vegano (100g): 5g proteina | 25g carboidratos | 140 kcal");
            printf("\n");
                printf("\n Escolha uma opcao(escolha entre 0 a 4):");
        }

        else if (prato == 2) { // Se digitou 2 mostra leguminosas
            puts("Leguminosas:");
            puts("- Feijao carioca (100g): 4g proteina | 14g carboidratos | 5g fibras | 90 kcal");
            puts("- Lentilha (100g): 9g proteina | 20g carboidratos | 8g fibras | 116 kcal");
            printf("\n");
                printf("\n Escolha uma opcao (escolha entre 0 a 4):");
        }

        else if (prato == 3) { // Se digitou 2 mostra leguminosas
            puts("Proteinas vegetais:");
            puts("- Tofu (100g): 8g proteina | 2g carboidratos | 70 kcal");
            puts("- Proteina vegetal texturizada hidratada (100g): 15g proteina | 9g carboidratos | 120 kcal");
            puts("- Grao de bico (100g): 6g proteina | 27g carboidratos | 160 kcal");
            printf("\n");
                printf("\n Escolha uma opcao (escolha entre 0 a 4):");
        }

        else if (prato == 4) { // Se digitou 2  mostra leguminosas
            puts("Saladas:");
            puts("- Mix verde (rucula + alface + espinafre)");
            puts("- Tomate temperado com limao");
            puts("- Cenoura ralada");
            printf("\n");
                printf("\n Escolha uma opcao (escolha entre 0 a 4):");
        }

        else if (prato == 0) { // Se digitou 0 volta ao menu 
            puts("Voltando ao menu...");
            break; // encerra o while
        }

        else {
            puts("Opcao invalida.");
        }

        printf("\n"); // organização. 
    }
}
