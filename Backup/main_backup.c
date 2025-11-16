/*
Projeto: Vegan Nutri
Autor: Gustavo Alexandre e Jessika Cardoso
Data de criação: 15/10/2025
Descrição:Sistema de substituições veganas.
*/
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main() {

    int opcao = 10; // Variavel para armazenar a opcao do usario (obs tentei varios numero achando que teria erro mas qualquer numero vai da certo só não pode deixa o while fazendo o loop em tudo)

        puts("========================="); // da linha 14 a 29 menu do sistema com opções do cardapio de siubstituições veganas
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
        printf("Escolha uma opcao: "); // pede para o usuario fazer a escolha da opção do menu 

    

        while (opcao != 0) { // while para manter o sistema rodando ate o usuario escolher 0 para sair, antes estava switch mas apos o usario escolher uma opção o programa fechava.


        scanf(" %d", &opcao);  // aqui vai entrar a opção que o usario fez a escolha. 
      
        switch (opcao) { // switch para cada opção do menu - linha 38 a 93
            case 1:
                puts("Substituicoes para leite:");
                puts("- Leite de amendoas - (por 100 ml): 0,5g proteina | 3g carboidratos | 1g gordura | 15 kcal");
                puts("- Leite de soja - (por 100 ml): 3g proteina | 4g carboidratos | 2g gordura | 33 kcal");
                puts("- Leite de aveia - (por 100 ml): 3g proteina | 4g carboidratos | 2g gordura | 33 kcal ");
                printf("\n");
                printf("\n Escolha uma opcao:");
                break;

            case 2:
                puts("Substituicoes para ovo:");
                puts("- Semente de linhaca com agua - 2 colheres = 3g proteina | 5g carboidratos | 4g fibras | 37 kcal");
                puts("- Pure de banana - 2 colheres = 3g proteina | 5g carboidratos | 4g fibras | 37 kcal");
                puts("- Tofu - 2 colheres = 3g proteina | 5g carboidratos | 4g fibras | 37 kcal");
                printf("\n");
                printf("\n Escolha uma opcao:");
                break;

            case 3:
                puts("Substituicoes para carne:");
                puts("- Proteina de soja - (100g) 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                puts("- Jaca verde - (100g) 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                puts("- Lentilha temperada - (100g) 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                printf("\n");
                printf("\n Escolha uma opcao:");
                break;

            case 4:
                puts("Substituicoes para frango:");
                puts("- Proteina vegetal texturizada desfiada - 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                puts("- Tofu marinado - 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                puts("- Cogumelos desfiados - 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
                printf("\n");
                printf("\n Escolha uma opcao:");
                break;

            case 5:
                puts("Sobremesas veganas e suas informacoes nutricionais:");
                puts("- Mousse de chocolate vegano:");
                puts("  Base: chocolate 70% cacau + leite vegetal");
                puts("  Por porcao (100g): 3g proteina | 18g carboidratos | 12g gorduras | 180 kcal\n");

                puts("- Pudim vegano de coco:");
                puts("  Base: leite de coco + amido de milho");
                puts("  Por porcao (100g): 1g proteina | 16g carboidratos | 9g gorduras | 140 kcal\n");

                puts("- Sorvete vegano de banana congelada:");
                puts("  Base: banana congelada batida");
                puts("  Por porcao (100g): 1g proteina | 23g carboidratos | 0g gordura | 89 kcal\n");

                puts("- Brownie vegano de cacau:");
                puts("  Base: cacau, farinha, oleo de coco e acucar demerara");
                puts("  Por porcao (100g): 4g proteina | 28g carboidratos | 10g gordura | 220 kcal\n");

                printf("\nEscolha uma opcao:");
                break; // break para finalizar cada case.

                case 6:
                montarRefeicao();
                break;

                case 7:
                guiaCompras();
                break;



            case 0: // opção para sair do sistema 
                puts("Saindo do sistema, obrigado por usar o Vegan Nutri!");
                break;

            default: // caso o usario digite uma opção que não tem no sistema - evita erros de usario
                puts("Opcao invalida! Tente novamente.\n"); 
        }
    }

    return 0;
}