#include <stdio.h>
#include "substituicoes.h"


void Substituicoes(int opcao) {

    
    switch (opcao) { 
        case 1:
            puts("Substituicoes para leite:");
            puts("- Leite de amendoas - (por 100 ml): 0,5g proteina | 3g carboidratos | 1g gordura | 15 kcal");
            puts("- Leite de soja - (por 100 ml): 3g proteina | 4g carboidratos | 2g gordura | 33 kcal");
            puts("- Leite de aveia - (por 100 ml): 3g proteina | 4g carboidratos | 2g gordura | 33 kcal ");
            break;

        case 2:
            puts("Substituicoes para ovo:");
            puts("- Semente de linhaca com agua - 2 colheres = 3g proteina | 5g carboidratos | 4g fibras | 37 kcal");
            puts("- Pure de banana - 2 colheres = 3g proteina | 5g carboidratos | 4g fibras | 37 kcal");
            puts("- Tofu - 2 colheres = 3g proteina | 5g carboidratos | 4g fibras | 37 kcal");
            break;

        case 3:
            puts("Substituicoes para carne:");
            puts("- Proteina de soja - (100g) 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
            puts("- Jaca verde - (100g) 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
            puts("- Lentilha temperada - (100g) 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
            break;

        case 4:
            puts("Substituicoes para frango:");
            puts("- Proteina vegetal texturizada desfiada - 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
            puts("- Tofu marinado - 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
            puts("- Cogumelos desfiados - 18g proteina | 9g carboidratos | 5g fibras | 120 kcal");
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
            break;

        default:
            
            puts("Opcao de substituicao invalida (1-5)."); 
            break;
    }

    printf("\nEscolha uma opcao(escolha entre 0 a 7):");

}