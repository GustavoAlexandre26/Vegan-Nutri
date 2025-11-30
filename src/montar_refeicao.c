#include <stdio.h>
#include "funcoes.h"
#include "tipos.h"
Alimento carboidratos [] = {
    {"Arroz integral", 2, 23, 110},
    {"Quinoa Cozida", 4, 19, 120},
    {"Macarrao vegano", 5, 25, 140}
};
int quantidadeCarbo = 3;

Alimento Leguminosas[] ={
    {"Feijao carioca", 4, 14, 90},
    {"Lentilha", 9, 20, 116}
};
int quatidadeLegume = 2;

Alimento proteinasVegetal[] = {
    {"Tofu", 8, 2, 70},
    {"Proteina vegetal txturizada", 15, 9, 120},
    {"Grao-de-bico", 6, 27, 160}
};
int quantidadeProteina = 3;

Alimento saladas[] = {
    {"Mix verde", 1, 1, 15},
    {"Tomate temperado", 1, 3, 18},
    {"Cenoura ralada", 1, 7, 41}
};
int quantidadeSalada = 3;

void montarRefeicao() { 
    // Usei 'void' porque esta função só exibe informações na tela,
    // ela não precisa retornar nada para o main.

    for (int i = 0; i< quantidadeCarbo; i++){
        printf ("%d - %s | %d proteina | %d carbo |%d kcal\n",
        i+1,
    carboidratos[i].nome,
    carboidratos[i].proteina,
    carboidratos[i].carbo,
    carboidratos[i].kcal);
    }
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
        printf("Opcao (escolha entre 0 a 4): ");

        while (prato != 0) { // repete até o usuário escolher 0. 

        scanf("%d", &prato); // aqui vai entrar a opção que o usario fez a escolha. 

        switch (prato) {   // switch para cada opção do menu

        case 1:
            puts("Carboidratos disponiveis:"); // Se o usuário digitou 1, mostramos os carboidratos.
            puts("- Arroz integral (100g): 2.6g proteina | 23g carboidratos | 1g fibras | 110 kcal");
            puts("- Quinoa cozida (100g): 4g proteina | 19g carboidratos | 2g gordura | 120 kcal");
            puts("- Macarrao vegano (100g): 5g proteina | 25g carboidratos | 140 kcal");
            printf("\n");
                printf("\n Escolha uma opcao(escolha entre 0 a 4):");
            break;

        case 2: // Se digitou 2 mostra leguminosas
            puts("Leguminosas:");
            puts("- Feijao carioca (100g): 4g proteina | 14g carboidratos | 5g fibras | 90 kcal");
            puts("- Lentilha (100g): 9g proteina | 20g carboidratos | 8g fibras | 116 kcal");
            printf("\n");
                printf("\n Escolha uma opcao (escolha entre 0 a 4):");
                break;        

        case 3: // Se digitou 2 mostra leguminosas
            puts("Proteinas vegetais:");
            puts("- Tofu (100g): 8g proteina | 2g carboidratos | 70 kcal");
            puts("- Proteina vegetal texturizada hidratada (100g): 15g proteina | 9g carboidratos | 120 kcal");
            puts("- Grao de bico (100g): 6g proteina | 27g carboidratos | 160 kcal");
            printf("\n");
                printf("\n Escolha uma opcao (escolha entre 0 a 4):");
                break;
        

        case 4: // Se digitou 2  mostra leguminosas
            puts("Saladas:");
            puts("- Mix verde (rucula + alface + espinafre)");
            puts("- Tomate temperado com limao");
            puts("- Cenoura ralada");
            printf("\n");
                printf("\n Escolha uma opcao (escolha entre 0 a 4):");      
                break;  

        case 0: // Se digitou 0 volta ao menu 
            puts("Voltando ao menu... Escolha uma opcao (escolha entre 0 a 7):");
            break; // encerra o while
        

        default: // caso o usario digite uma opção que não tem no sistema - evita erros de usario
                puts("Opcao invalida! Tente novamente.\n");
        

        printf("\n"); // organização. 
    }
    
}


}