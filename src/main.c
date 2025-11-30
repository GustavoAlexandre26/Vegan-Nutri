/*
Projeto: Vegan Nutri
Autor: Gustavo Alexandre e Jessika Cardoso
Data de criação: 15/10/2025
Descrição: Sistema de substituições veganas e módulos de refeição/compras.
*/
#include <stdio.h>
#include <stdlib.h>
// Incluindo headers necessários (assumindo que estão na pasta 'include')
#include "funcoes.h"      // Contém montarRefeicao() e guiaCompras()
#include "tipos.h"        // Contém a struct Alimento
#include "menu.h"         // Contém exibirMenu()
#include "substituicoes.h" // Contém a função que processará as opções 1 a 5

// IMPORTANTE: Se você criou a função Substituicoes(int opcao), use ela.
// Caso contrário, use a função processarSubstituicoes(int opcao).
// Vou usar um nome genérico aqui, ajuste conforme o nome final que você escolheu.
void processarSubstituicoes(int opcao); // Apenas declarando para o compilador não reclamar antes de incluir o .h (Boa Prática)


int main() {
    
    int opcao = 10; 

    // 1. CHAMA O MENU PELA PRIMEIRA VEZ ANTES DE ENTRAR NO LOOP
    exibirMenu(); 

    while (opcao != 0) { 

        // Lê a opção do usuário
        // O printf já foi feito dentro da função exibirMenu()
        scanf(" %d", &opcao);  
      
        switch (opcao) { 
            
            // CASES 1 a 5: DELEGADOS para o novo módulo SUBSTITUICOES
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                // Você deve implementar a função processarSubstituicoes(opcao) no seu substituicoes.c
                // Temporariamente, vou deixar o código original do main.c para que compile antes da modularização
                // O código abaixo será substituído pela chamada à função 'processarSubstituicoes(opcao);'
                
                // CÓDIGO TEMPORÁRIO ORIGINAL DO main.c (Para compilar agora)
                // ***************************************************************
                if (opcao == 1) {
                    puts("Substituicoes para leite:");
                    puts("- Leite de amendoas - (por 100 ml): 0,5g proteina | 3g carboidratos | 1g gordura | 15 kcal");
                    puts("- Leite de soja - (por 100 ml): 3g proteina | 4g carboidratos | 2g gordura | 33 kcal");
                    puts("- Leite de aveia - (por 100 ml): 3g proteina | 4g carboidratos | 2g gordura | 33 kcal ");
                } else if (opcao == 2) {
                    puts("Substituicoes para ovo:");
                    puts("- Semente de linhaca com agua - 2 colheres = 3g proteina | 5g carboidratos | 4g fibras | 37 kcal");
                    puts("- Pure de banana - 2 colheres = 3g proteina | 5g carboidratos | 4g fibras | 37 kcal");
                    puts("- Tofu - 2 colheres = 3g proteina | 5g carboidratos | 4g fibras | 37 kcal");
                } else if (opcao == 3) {
                    puts("Substituicoes para carne:");
                    puts("- Proteina de soja - (100g) 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                    puts("- Jaca verde - (100g) 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                    puts("- Lentilha temperada - (100g) 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                } else if (opcao == 4) {
                    puts("Substituicoes para frango:");
                    puts("- Proteina vegetal texturizada desfiada - 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                    puts("- Tofu marinado - 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                    puts("- Cogumelos desfiados - 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                } else if (opcao == 5) {
                    puts("Sobremesas veganas e suas informacoes nutricionais:");
                    puts("- Mousse de chocolate vegano: 3g proteina | 18g carboidratos | 12g gorduras | 180 kcal\n");
                    puts("- Pudim vegano de coco: 1g proteina | 16g carboidratos | 9g gorduras | 140 kcal\n");
                    puts("- Sorvete vegano de banana congelada: 1g proteina | 23g carboidratos | 0g gordura | 89 kcal\n");
                    puts("- Brownie vegano de cacau: 4g proteina | 28g carboidratos | 10g gordura | 220 kcal\n");
                }
                
                // ***************************************************************
                
                // Depois de mostrar a opção, exibe o menu novamente
                exibirMenu(); 
                break;

            case 6: // case que chama a função de montar refeição 
                montarRefeicao();
                exibirMenu(); // Volta a mostrar o menu principal
                break;

            case 7: // case que chama a função do guia de compras 
                guiaCompras();
                exibirMenu(); // Volta a mostrar o menu principal
                break;

            case 0: // opção para sair do sistema 
                puts("Saindo do sistema, obrigado por usar o Vegan Nutri!");
                break;

            default: // caso o usario digite uma opção que não tem no sistema - evita erros de usario
                puts("Opcao invalida! Tente novamente.\n"); 
                exibirMenu(); // Volta a mostrar o menu principal
                break;
        }
    }

    return 0;
}