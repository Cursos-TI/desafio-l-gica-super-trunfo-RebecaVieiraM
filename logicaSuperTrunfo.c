#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Declaração de variáveis para as cartas A e B
    char estadoA[50], estadoB[50];
    char codigoCartaA[10], codigoCartaB[10];
    char nomeCidadeA[50], nomeCidadeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int numPontosTuristicosA, numPontosTuristicosB;    
    float densidadePopulacionalA, densidadePopulacionalB;
    float pibPerCapitaA, pibPerCapitaB;

    // Variável para armazenar a carta vencedora
    char cartaVencedora;
    // Variável para armazenar a categoria que determinará a carta vencedora
    int opcao1, opcao2;


    // Cadastro das Cartas

    // Entradas de dados para a carta A
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


    // Entradas de dados para a carta B
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

    // Cálculos:
    densidadePopulacionalA = (areaA > 0) ? (populacaoA / areaA) : 0;
    densidadePopulacionalB = (areaB > 0) ? (populacaoB / areaB) : 0;
    pibPerCapitaA = (populacaoA > 0) ? (pibA / populacaoA) : 0;
    pibPerCapitaB = (populacaoB > 0) ? (pibB / populacaoB) : 0;

    do{
        // Menu interativo para escolha de dois atributos
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
        if (opcao1 < 1 || opcao1 > 5 || opcao2 < 1 || opcao2 > 5) {
            printf("Opção inválida! Escolha entre 1 e 5.\n");
            continue; // Volta ao início do loop
        }

        int vencedorA = 0, vencedorB = 0, empates = 0;

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

        if(empates > vencedorA && empates > vencedorB) {
            printf("\nEmpate!\n");
        } else if (vencedorA > vencedorB) {
            printf("\nCarta A é a vencedora com (%d) pontos!\n", vencedorA);
        } else {
            printf("\nCarta B é a vencedora com (%d) pontos!\n", vencedorA);
        }

    } while (opcao1 != 6 && opcao2 != 6); 

    printf("Saindo do programa...\n");
    return 0;
}
