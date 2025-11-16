/*
Projeto: Vegan Nutri
Autor: Gustavo Alexandre e Jessika Cardoso
Data de criação: 15/10/2025
Descrição:Sistema de substituições veganas.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int opcao = 10;

    while (opcao != 0) {

        puts("=========================");
        puts("      VEGAN NUTRI        ");
        puts("=========================");
        puts("Cardapio de substituicoes veganas:");
        puts("--------------------------");
        puts("1 - leite");
        puts("2 - Ovo");
        puts("3 - Carne");
        puts("4 - Frango");
        puts("0 - Sair");
        puts("--------------------------");
        printf("\n");
        puts("Ser vegano e escolher, todos os dias, construir um mundo mais leve, compassivo e cheio de vida, comecando pelo prato e transbordando para o coracao.\n");
        printf("\n");
        printf("Escolha uma opcao: ");
        scanf(" %d", &opcao);   
      
        switch (opcao) {
            case 1:
                puts("Substituicoes para leite:");
                puts("- Leite de amendoas");
                puts("- Leite de soja");
                puts("- Leite de aveia\n");
                break;

            case 2:
                puts("Substituicoes para ovo:");
                puts("- Semente de linhaça com agua");
                puts("- Pure de banana");
                puts("- Tofu\n");
                break;

            case 3:
                puts("Substituicoes para carne:");
                puts("- Proteina de soja");
                puts("- Jaca verde");
                puts("- Lentilha temperada\n");
                break;

            case 4:
                puts("Substituicoes para frango:");
                puts("- PVT desfiada");
                puts("- Tofu marinado");
                puts("- Cogumelos desfiados\n");
                break;

            case 0:
                puts("Saindo do sistema, obrigado por usar o Vegan Nutri!");
                break;

            default:
                puts("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
