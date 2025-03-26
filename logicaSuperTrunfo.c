#include <stdio.h>

// ========================================= 
// Programa: Desafio Super Trunfo - Comparação de Cartas de Estados
// Descrição: O programa simula um jogo no estilo "Super Trunfo", onde duas cartas
// representando cidades são comparadas com base em critérios escolhidos pelo usuário.
// O jogador escolhe dois critérios por rodada, e a cidade com os melhores valores
// acumula pontos. No final, a cidade com mais pontos vence o jogo.
//
// Autor: Rebeca Vieira Maia
// ========================================= 

int main() {

    // Declaração de variáveis para armazenar os dados das cartas
    char estadoA[50], estadoB[50]; 
    char codigoCartaA[10], codigoCartaB[10]; 
    char nomeCidadeA[50], nomeCidadeB[50]; 
    int populacaoA, populacaoB; 
    float areaA, areaB; 
    float pibA, pibB; 
    int numPontosTuristicosA, numPontosTuristicosB;
    float densidadePopulacionalA, densidadePopulacionalB; 
    float pibPerCapitaA, pibPerCapitaB; 

    int criterio1, criterio2; // Critérios escolhidos para a comparação

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

    // Inicialização da pontuação
    int pontuacaoA = 0, pontuacaoB = 0, empates = 0;
 
    // Loop para permitir múltiplas comparações
    do{
        // Exibição do menu de critérios
        printf("\nEscolha dois critérios para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB per capita\n");
        printf("6 - Sair\n");

        printf("Escolha o primeiro critério: ");
        scanf("%d", &criterio1);
        if (criterio1 == 6) break;

        printf("Escolha o segundo critério:");
        scanf("%d", &criterio2);
        printf("\n");
        if (criterio2 == 6) break;

        // Validação das opções escolhidas
        if (criterio1 < 1 || criterio1 > 5 || criterio2 < 1 || criterio2 > 5) {
            printf("Opção inválida! Escolha entre 1 e 5.\n");
            continue; // Volta ao início do loop
        }

        // Comparação dos critérios escolhidos
        for(int i = 0; i < 2; i++){
            int opcao = (i == 0) ? criterio1 : criterio2;
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
                empates++;
            }
        }

    } while (criterio1 != 6 && criterio2 != 6); //Sai da estrutura de repetição ao digitar "6"

    // Exibição da pontuação final
    printf("\n===========================");
    printf("\n---Pontuação final---\n");
    printf("\nCarta A (%s): %d pontos\n", nomeCidadeA, pontuacaoA);
    printf("Carta B (%s): %d pontos\n", nomeCidadeB, pontuacaoB);
    printf("Empates: %d\n", empates);

    // Definição da carta vencedora
    if(pontuacaoA > pontuacaoB) {
        printf("\nCarta A (%s) é a vencedora!\n", nomeCidadeA);
    } else if (pontuacaoA < pontuacaoB) {
        printf("\nCarta B (%s) é a vencedora!\n", nomeCidadeB);
    } else {
        printf("\nEmpate geral!\n");
    }
    printf("===========================\n");

    return 0;
}
