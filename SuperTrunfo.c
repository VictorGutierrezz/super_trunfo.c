#include <stdio.h>
#include <string.h>

int main() {
    char Estado[3], codigo[4], cidade[50];
    int pontosturisticos;
    long int populacao;
    float area, pib, densidade, pibCapita;

    char Estado2[3], codigo2[4], cidade2[50];
    int pontosturisticos2;
    long int populacao2;
    float area2, pib2, densidade2, pibCapita2;

    // Entrada da Carta 1
    printf("Estado: ");
    scanf("%2s", Estado);

    printf("Codigo: ");
    scanf("%3s", codigo);

    printf("Cidade: ");
    getchar(); 
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Populacao: ");
    scanf("%ld", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos);

    // Entrada da Carta 2
    printf("\nEstado: ");
    scanf("%2s", Estado2);

    printf("Codigo: ");
    scanf("%3s", codigo2);

    printf("Cidade: ");
    getchar(); 
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%ld", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos
    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    pibCapita = pib * 1000000000 / populacao;    
    pibCapita2 = pib2 * 1000000000 / populacao2;

    // Impressão das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %ld\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibCapita);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %ld\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);

    // Comparação dos atributos
    printf("\nComparacao de atributos:\n");

    printf("Populacao: %s\n", (populacao > populacao2) ? "Carta 1 vence" :
                               (populacao2 > populacao) ? "Carta 2 vence" : "Empate");

    printf("Area: %s\n", (area > area2) ? "Carta 1 vence" :
                          (area2 > area) ? "Carta 2 vence" : "Empate");

    printf("PIB: %s\n", (pib > pib2) ? "Carta 1 vence" :
                         (pib2 > pib) ? "Carta 2 vence" : "Empate");

    printf("Pontos Turisticos: %s\n", (pontosturisticos > pontosturisticos2) ? "Carta 1 vence" :
                                       (pontosturisticos2 > pontosturisticos) ? "Carta 2 vence" : "Empate");

    printf("Densidade Populacional (menor vence): %s\n", (densidade < densidade2) ? "Carta 1 vence" :
                                                          (densidade2 < densidade) ? "Carta 2 vence" : "Empate");

    printf("PIB per Capita: %s\n", (pibCapita > pibCapita2) ? "Carta 1 vence" :
                                   (pibCapita2 > pibCapita) ? "Carta 2 vence" : "Empate");

    return 0;
}

