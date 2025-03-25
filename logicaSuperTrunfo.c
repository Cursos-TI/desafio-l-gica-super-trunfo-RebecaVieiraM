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

        // Contadores para definir a carta vencedora
        int vencedorA = 0, vencedorB = 0, empates = 0;

        // Comparação de cada critério escolhido
        for(int i = 0; i < 2; i++){
            int opcao = (i == 0) ? opcao1 : opcao2;
        
            switch (opcao) {
                case 1:
                    if (populacaoA > populacaoB){
                        printf("%s venceu com maior população (%d).\n", nomeCidadeA, populacaoA); 
                        vencedorA++;
                    }
                    else if (populacaoA == populacaoB){
                        printf("Empate! Ambas as cartas possuem a mesma população (%d).\n", populacaoB);
                        empates++;
                    }
                    else {
                        printf("%s venceu com maior população (%d).\n", nomeCidadeB, populacaoB);
                        vencedorB++;
                    }
                    break;
                case 2:
                    if (areaA > areaB){
                        printf("%s venceu com maior área (%.2f km²).\n", nomeCidadeA, areaA); 
                        vencedorA++;
                    }
                    else if (areaA == areaB){
                        printf("Empate! Ambas as cartas possuem a mesma área (%.2f km²).\n", areaA); 
                        empates++;
                    }
                    else {
                        printf("%s venceu com maior área (%.2f km²).\n", nomeCidadeB, areaB); 
                        vencedorB++;
                    }
                    break;
                case 3:
                    if (pibA > pibB){
                        printf("%s venceu com maior PIB (%.2f).\n", nomeCidadeA, pibA); 
                        vencedorA++;
                    }
                    else if (pibA == pibB){
                        printf("Empate! Ambas as cartas possuem mesmo PIB (%.2f).\n", pibA); 
                        empates++;
                    }
                    else {
                        printf("%s venceu com maior PIB (%.2f).\n", nomeCidadeB, pibB);
                        vencedorB++;
                    }
                    break;
                case 4:
                    if (densidadePopulacionalA > densidadePopulacionalB){
                        printf("%s venceu com maior densidade populacional (%.2f hab/km²).\n", nomeCidadeA, densidadePopulacionalA); 
                        vencedorA++;
                    }
                    else if (densidadePopulacionalA == densidadePopulacionalB){
                        printf("Empate! Ambas as cartas possuem a mesma densidade populacional (%.2f hab/km²).\n", densidadePopulacionalA); 
                        empates++;
                    }
                    else {
                        printf("%s venceu com maior densidade populacional (%.2f hab/km²).\n", nomeCidadeB, densidadePopulacionalB); 
                        vencedorB++;
                    }
                    break;
                case 5:
                    if (pibPerCapitaA > pibPerCapitaB){
                        printf("%s venceu com maior PIB per capita (%.2f).\n", nomeCidadeA, pibPerCapitaA); 
                        vencedorA++;
                    }
                    else if (pibPerCapitaA == pibPerCapitaB){
                        printf("Empate! Ambas as cartas possuem mesmo PIB per capita (%.2f).\n", pibPerCapitaA); 
                        empates++;
                    }
                    else {
                        printf("%s venceu com maior PIB per capita (%.2f).\n", nomeCidadeB, pibPerCapitaB); 
                        vencedorB++;
                    }
                    break;
                default:
                    printf("Opção inválida!\n");
            }
        }

        // Definição da carta vencedora
        if(empates > vencedorA && empates > vencedorB) {
            printf("\nEmpate geral! Ambos possuem %d pontos.\n", vencedorA);
        } else if (vencedorA > vencedorB) {
            printf("\nCarta A é a vencedora com %d pontos!\n", vencedorA);
        } else {
            printf("\nCarta B é a vencedora com %d pontos!\n", vencedorB);
        }

    } while (opcao1 != 6 && opcao2 != 6); 

    // Mensagem de saída
    printf("Saindo do programa...\n");

    return 0;
}
