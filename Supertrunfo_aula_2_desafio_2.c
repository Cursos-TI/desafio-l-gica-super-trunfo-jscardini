#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};

int main() {

    /* Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    Cadastro das Cartas:
    Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.*/

    // Variaveis Carta A
    char estadoA, nomeCidadeA[20], codCartaA[4];
    unsigned long int populationA; int nuPointTuristicA;
    double areaA, PIBA;

    // Variaveis Carta B

    char estadoB, nomeCidadeB[20], codCartaB[4];
    unsigned long int populationB; int nuPointTuristicB;
    double areaB, PIBB;


    printf("\nInforme o estado A (Obs: uma Letra de A a H):");
    scanf(" %c", &estadoA);
    limparBuffer();
    printf("\nInforme o codigo da carta A ( ex: A01, B03) (de A a H) e (de 1 a 4 ):");
    scanf(" %3s", &codCartaA);
    limparBuffer();

    printf("Informe o nome da cidade A: \n");
    fgets(nomeCidadeA, 20, stdin);
    nomeCidadeA[strcspn(nomeCidadeA, "\n")] = 0;

    printf("\n Informe o numero da populacao A: \n");
    scanf(" %lu", &populationA);
    limparBuffer();

    printf("\n Informe a area em metros quadrados A: \n");
    scanf("%lf", &areaA);
    limparBuffer();

    printf("\n Informe o PIB da regioo A: exemplo: 674800000000.0;\n");
    scanf("%lf", &PIBA);
    limparBuffer();
    
    printf(" Informe os pontos de turismo para regioo A : \n");
    scanf("%i", &nuPointTuristicA);
    limparBuffer();

    printf("Informe o estado B (Obs: uma Letra de A a H): \n");
    scanf(" %c", &estadoB);
    limparBuffer();

    printf("\nInforme o codigo da carta B ( ex: A01, B03) (de A a H) e (de 1 a 4 ): \n");
    scanf(" %3s", &codCartaB);
    limparBuffer();

    printf("Informe o nome da cidade B: \n");
    fgets(nomeCidadeB, 20, stdin);
    nomeCidadeB[strcspn(nomeCidadeB, "\n")] = 0;

    printf("Informe o numero da populacao B: \n");
    scanf("%lu", &populationB);
    limparBuffer();

    printf("Informe a area em metros quadrados B: \n");
    scanf("%lf", &areaB);
    limparBuffer();

    printf("Informe o PIB da regiao B: exemplo: 300500000000.0\n");
    scanf("%lf", &PIBB);
    limparBuffer();
    
    printf("Informe os pontos de turismo para regiao B : \n");
    scanf("%i", &nuPointTuristicB);
    limparBuffer();


    //processamento dos dados:
    
    float densidadePopuA, pibPercapiA, densidadePopuB, pibPercapiB;
    densidadePopuA = populationA/areaA;
    pibPercapiA = PIBA/populationA;

    densidadePopuB = populationB/areaB;
    pibPercapiB = PIBB/populationB;
    
    // calculo SuperPower 
    float superpowerA, superpowerB;
    superpowerA = (float)populationA + areaA + PIBA + (float)nuPointTuristicA + pibPercapiA + (1.0f / densidadePopuA);
    superpowerB = (float)populationB + areaB + PIBB + (float)nuPointTuristicB + pibPercapiB + (1.0f / densidadePopuB);

    printf("--------------------------------Selecaocomparacao-----------------------------------\n");
    int opcao;
    printf("Selecione abaixo qual criterio de avaliação sera usado para verificar o vencedor:\n");
    printf("1 - Densidade populacional: \n");
    printf("2 - Pib Percapito:\n");
    printf("3 - Superpoder:\n");
    scanf("%i", &opcao);
    limparBuffer();

    switch(opcao){

        case 1:{
            if(densidadePopuA > densidadePopuB){
                printf("Como maior Densidade Populacional carta A foi a vencedora\n");
            }else if(densidadePopuA < densidadePopuB){
                printf("Como maior Densidade Populacional carta B foi a vencedora\n");
            } else if (densidadePopuA == densidadePopuB){
                printf("### Empate! ###\n");
            }
        }
        break;
        case 2:{

            if(pibPercapiA > pibPercapiB){
                printf("Como maior PIB per capita carta A foi a vencedora\n");
            }else if(pibPercapiA < pibPercapiB){
                printf("Como maior PIB per capita carta B foi a vencedora\n");
            } else if (pibPercapiA == pibPercapiB){
                printf("### Empate! ###\n");
            }
        }
        break;
        case 3:{
            if(superpowerA > superpowerB){
                printf("Como maior Super poder a carta A foi a vencedora\n");
            }else if(superpowerA < superpowerB){
                printf("Como maior Super poder a carta B foi a vencedora\n");
            } else if (superpowerA == superpowerB){
                printf("### Empate! ###\n");
            }
        }
        break;{
            printf("#### Opção invalida ####\n");
        }
    }

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("-------------------------------Carta-A--------------------------\n");
    printf("Informacoes Carta A:\n");
    printf("Estado A: %c \n", estadoA);
    printf("Codigo do estado A: %s \n", codCartaA);
    printf("Cidade A:%s \n ", nomeCidadeA);
    printf("Populacao Cidade A: %lu \n", populationA);
    printf("Area Cidade A: %f \n", areaA);
    printf("Produto interno bruto - PIB cidade A: %f \n",PIBA);
    printf("Pontos turisticos Cidade A: %i \n", nuPointTuristicA);
    printf("Densidade Populacional Carta A: %.2f \n", densidadePopuA);
    printf("Pib Percapita Carta A: %f \n", pibPercapiA);

    printf("\n ----------------------------Carta-B--------------------------\n");

    printf("Informacoes Carta B:\n");
    printf("Estado B: %c \n", estadoB);
    printf("Codigo do estado B: %s \n", codCartaB);
    printf("Cidade B:%s \n ", nomeCidadeB);
    printf("Populacao Cidade B: %lu \n", populationB);
    printf("Area Cidade B: %f \n", areaB) ;
    printf("Produto interno bruto - PIB cidade B: %f \n",PIBB);
    printf("Pontos turisticos Cidade B: %i \n", nuPointTuristicB);
    printf("Densidade Populacional Carta B: %.2f \n", densidadePopuB);
    printf("Pib Percapita Carta B: %f \n", pibPercapiB);
    printf("---------------------------------------------------------------\n ");

    printf("___________________________Vencedor____________________________\n");

    // comparação das cartas: 
    printf("-------------------------------Apresentação-dos-Resultados--------------------------------------------\n");

    int cartaA = 0, cartaB = 0;
    if(densidadePopuA > densidadePopuB){
        printf("A carta A possui a maior densidade populacional. \n");
        cartaA ++;
    } else {
        printf("A carta B possui a maior densidade populacional. \n");
        cartaB ++;
    }

    if(pibPercapiA > pibPercapiB){
        printf("A carta A possui um PIB percapita. \n");
        cartaA ++;
    } else {
        printf("A carta B possui um PIB percapita. \n");
        cartaB ++;
    }
    
    if(superpowerA > superpowerB){
        printf("A Carta A possui um super Poder maior que a Carta B\n");
        cartaA ++;
    } else {
        printf("A Carta B possui um super Poder maior que a Carta A\n");
        cartaB ++;
    }
    printf("-------------------------------------------------Vencedor----------------------------------------------\n");
    if (cartaA > cartaB) {
        printf("Com %i pontos a carta A Foi a vencedora!\n", cartaA);
    } else {
        printf("Com %i pontos a carta B Foi a vencedora!\n", cartaB);
    }
    return 0;
 };

/*Carta 1:

Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:

Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30    */

