#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declaração de variáveis

    // Propriedades da carta A
    char estadoA[50];
    char codigoCartaA[10];
    char nomeCidadeA[50];
    int populacaoA;
    float areaA;
    float pibA;
    int numPontosTuristicosA;    
    float densidadePopulacionalA;
    float pibPerCapitaA;


    // Propriedades da carta B
    char estadoB[50];
    char codigoCartaB[10];
    char nomeCidadeB[50];
    int populacaoB;
    float areaB;
    float pibB;
    int numPontosTuristicosB;    
    float densidadePopulacionalB;
    float pibPerCapitaB;

    char cartaVencedora = "";
    // Variável para armazenar a carta vencedora
    char cartaVencedora = "";
    // Variável para armazenar a categoria que determinará a carta vencedora
    int opcao;


    // Cadastro das Cartas

    // Entradas da carta A:
    printf("Dados da carta A: ");
    
    // Entrada do Estado da carta:
    printf("Digite o Estado da cidade: ");
    scanf(" %49[^\n]", estadoA);

    // Entrada do código da carta:
    printf("Digite o código da cidade: ");
    scanf("%d", &codigoCartaA);

    // Entrada do nome da cidade da carta:
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidadeA);

    // Entrada do população da cidade da carta:
    printf("Digite a população da cidade: ");
    scanf("%d", &populacaoA);
    
    // Entrada da área da cidade da carta:
    printf("Digite o área da cidade: ");
    scanf("%f", &areaA);

    // Entrada do pib da cidade da carta:
    printf("Digite o pib da cidade: ");
    scanf("%f", &pibA);

    // Entrada do número de pontos turísticos da cidade da carta:
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numPontosTuristicosA);


    // Entradas da carta B:
    printf("Dados da carta B: ");

    // Entrada do Estado da carta:
    printf("Digite o Estado da cidade: ");
    scanf(" %49[^\n]", estadoB);

    // Entrada do código da carta:
    printf("Digite o código da cidade: ");
    scanf("%d", &codigoCartaB);

    // Entrada do nome da cidade da carta:
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidadeB);

    // Entrada do população da cidade da carta:
    printf("Digite a população da cidade: ");
    scanf("%d", &populacaoB);
    
    // Entrada da área da cidade da carta:
    printf("Digite o área da cidade: ");
    scanf("%f", &areaB);

    // Entrada do pib da cidade da carta:
    printf("Digite o pib da cidade: ");
    scanf("%f", &pibB);

    // Entrada do número de pontos turísticos da cidade da carta:
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numPontosTuristicosB);

    // Cálculo de Densidade Populacional:
    densidadePopulacionalA = (populacaoA > 0) ? (populacaoA / areaA) : 0;
    densidadePopulacionalB = (populacaoB > 0) ? (populacaoB / areaB) : 0;

    // Cálculo de PIB per capta:
    pibPerCapitaA = (populacaoA > 0) ? (pibA / populacaoA) : 0;
    pibPerCapitaB = (populacaoB > 0) ? (pibB / populacaoB) : 0;

    do{

    
        // Menu interativo:
        printf("\nEscolha um critério para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB per capita\n");
        printf("6 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%s", &opcao);

        switch (opcao) {
            case 1:
                if (populacaoA > populacaoB) // Compara a população das cartas A e B
                    printf("%s venceu com maior população (%d).\n", nomeCidadeA, populacaoA); // Se a condição for verdadeira, exibe a carta A como vencedora com maior população
                else
                printf("%s venceu com maior população (%d).\n", nomeCidadeB, populacaoB); // Se a condição for falsa, exibe a carta B como vencedora com maior população
                break;
            case 2:
                if (areaA > areaB)
                    printf("%s venceu com maior área (%.2f km²).\n", nomeCidadeA, areaA); // Se a condição for verdadeira, exibe a carta A como vencedora com maior área
                else
                printf("%s venceu com maior área (%.2f km²).\n", nomeCidadeB, areaB); // Se a condição for falsa, exibe a carta B como vencedora com maior área
                break;
            case 3:
                if (pibA > pibB)
                    printf("%s venceu com maior PIB (%.2f).\n", nomeCidadeA, pibA); // Se a condição for verdadeira, exibe a carta A como vencedora com maior PIB
                else
                printf("%s venceu com maior PIB (%.2f).\n", nomeCidadeB, pibB); // Se a condição for falsa, exibe a carta B como vencedora com maior PIB
                break;
            case 4:
                if (densidadePopulacionalA > densidadePopulacionalB)
                    printf("%s venceu com maior densidade populacional (%.2f).\n", nomeCidadeA, densidadePopulacionalA); // Se a condição for verdadeira, exibe a carta A como vencedora com maior densidade populacional
                else
                printf("%s venceu com maior densidade populacional (%.2f).\n", nomeCidadeB, densidadePopulacionalB); // Se a condição for falsa, exibe a carta B como vencedora com maior densidade populacional
                break;
            case 5:
                if (pibPerCapitaA > pibPerCapitaB)
                    printf("%s venceu com maior PIB per capita (%.2f).\n", nomeCidadeA, pibPerCapitaA); // Se a condição for verdadeira, exibe a carta A como vencedora com maior PIB per capita
                else
                printf("%s venceu com maior PIB per capita (%.2f).\n", nomeCidadeA, pibPerCapitaA); // Se a condição for falsa, exibe a carta B como vencedora com maior PIB per capita
                break;
            case 6:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 6);
    

    return 0;
}
