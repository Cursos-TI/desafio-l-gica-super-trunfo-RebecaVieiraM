#include <stdio.h>

// Programa: Desafio Super Trunfo - Comparação de Cartas de Estados
// Descrição: O programa compara duas cartas baseadas em critérios escolhidos pelo usuário
// Autor: Rebeca Vieira Maia

int main() {

    // Declaração de variáveis
    char estadoA[50], estadoB[50]; // Nome do estado
    char codigoCartaA[10], codigoCartaB[10]; // Código identificador da carta
    char nomeCidadeA[50], nomeCidadeB[50]; // Nome da cidade
    int populacaoA, populacaoB; // População da cidade
    float areaA, areaB; //  Área da cidade em km²
    float pibA, pibB; // Produto Interno Bruto da cidade
    int numPontosTuristicosA, numPontosTuristicosB; // Número de pontos turísticos da cidade
    float densidadePopulacionalA, densidadePopulacionalB; // Habitantes da cidade por km²
    float pibPerCapitaA, pibPerCapitaB; // PIB per capita da cidade

    int opcao1, opcao2; // Opções escolhidas para a comparação

    // Entradas de dados - Carta A
    printf("\nDados da carta A:\n");
    printf("Digite o Estado: ");
    scanf(" %49[^\n]", estadoA);
    printf("Digite o código: ");
    scanf("%9s", codigoCartaA);
    printf("Digite o nome: ");
    scanf(" %49[^\n]", nomeCidadeA);
    printf("Digite a população: ");
    scanf("%d", &populacaoA);
    printf("Digite a área (km²):");
    scanf("%f", &areaA);
    printf("Digite o PIB: ");
    scanf("%f", &pibA);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicosA);

    // Entradas de dados - Carta B
    printf("\nDados da carta B:\n");
    printf("Digite o Estado: ");
    scanf(" %49[^\n]", estadoB);
    printf("Digite o código: ");
    scanf("%9s", codigoCartaB);
    printf("Digite o nome: ");
    scanf(" %49[^\n]", nomeCidadeB);
    printf("Digite a população: ");
    scanf("%d", &populacaoB);
    printf("Digite a área (km²):");
    scanf("%f", &areaB);
    printf("Digite o PIB: ");
    scanf("%f", &pibB);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicosB);

    // Cálculo de métricas derivadas
    densidadePopulacionalA = (areaA > 0) ? (populacaoA / areaA) : 0;
    densidadePopulacionalB = (areaB > 0) ? (populacaoB / areaB) : 0;
    pibPerCapitaA = (populacaoA > 0) ? (pibA / populacaoA) : 0;
    pibPerCapitaB = (populacaoB > 0) ? (pibB / populacaoB) : 0;

    // Contadores para definir a carta vencedora
    int pontuacaoA = 0, pontuacaoB = 0;
 
    // Loop de Comparação das Cartas
    do{
        // Exibição do menu de escolha de critérios
        printf("\nEscolha dois critérios para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB per capita\n");
        printf("6 - Sair\n");

        printf("Escolha o primeiro critério: ");
        scanf("%d", &opcao1);
        if (opcao1 == 6) break;

        printf("Escolha o segundo critério: ");
        scanf("%d", &opcao2);
        if (opcao2 == 6) break;

        // Validação das opções
        if (opcao1 < 1 || opcao1 > 5 || opcao2 < 1 || opcao2 > 5) {
            printf("Opção inválida! Escolha entre 1 e 5.\n");
            continue; // Volta ao início do loop
        }

        // Comparação de cada critério escolhido
        for(int i = 0; i < 2; i++){
            int opcao = (i == 0) ? opcao1 : opcao2;
            float valorA = 0, valorB = 0;
            char criterio[30];
        
            switch (opcao) {
              case 1: valorA = populacaoA; valorB = populacaoB; sprintf(criterio, "População"); break;
              case 2: valorA = areaA; valorB = areaB; sprintf(criterio, "Área"); break; 
              case 3: valorA = pibA; valorB = pibB; sprintf(criterio, "PIB"); break;
              case 4: valorA = densidadePopulacionalA; valorB = densidadePopulacionalB; sprintf(criterio, "Densidade Populacional"); break;
              case 5: valorA = pibPerCapitaA; valorB = pibPerCapitaB; sprintf(criterio, "PIB per capita"); break; 
            }

            if ( valorA > valorB ) {
                printf("%s venceu com maior %s (%.2f).\n", nomeCidadeA, criterio, valorA);
                pontuacaoA++;
            } else if ( valorA < valorB ) {
                printf("%s venceu com maior %s (%.2f).\n", nomeCidadeB, criterio, valorB);
                pontuacaoB++;
            } else {
                printf("Empate no critério %s (%.2f).\n", criterio, valorA);
            }
        }

    } while (opcao1 != 6 && opcao2 != 6); 

    // Mensagem de saída
    printf("Saindo do programa...\n");

    // Exibição da carta vencedora
    printf("\nPontuação final:\n");
    printf("Carta A (%s): %d pontos\n", nomeCidadeA, pontuacaoA);
    printf("Carta B (%s): %d pontos\n", nomeCidadeB, pontuacaoB);

    // Definição da carta vencedora
    if(pontuacaoA == pontuacaoB) {
        printf("\nEmpate geral!\n");
    } else if (pontuacaoA > pontuacaoB) {
        printf("\nCarta A (%s) é a vencedora!\n", nomeCidadeA);
    } else {
        printf("\nCarta B (%s) é a vencedora!\n", nomeCidadeB);
    }

    return 0;
}
