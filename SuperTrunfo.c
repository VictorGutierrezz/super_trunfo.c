#include <stdio.h>
#include <string.h>
int main() {
    char Estado[1], codigo[3], cidade[50];
    int populacao,turistas;
    float area, pib;
    
    char Estado2[1], codigo2[3], cidade2[50];
    int populacao2,turistas2;
    float area2, pib2;
    
	printf("Estado: \n");
    scanf("%s", & Estado);
    
	printf("\nCodigo: \n");
    scanf("%s", & codigo);
    
    printf("\nCidade: \n");
    getchar();
    fgets(cidade, 50, stdin);
 
    printf("\nPopulacao: \n");
    scanf("%d", & populacao);

	
	printf("\nArea: \n");
    scanf("%f", & area);

    
    printf("\nPIB: \n");
    scanf("%f", & pib);
 
    printf("\nNumero de Pontos Turisticos: \n");
    scanf("%d", & turistas);
    
    
	printf("\nEstado: \n");
    scanf("%s", & Estado2);
    
	printf("\nCodigo: \n");
    scanf("%s", & codigo2);
    
    printf("\nCidade: \n");
    getchar();
    fgets(cidade2, 50, stdin);
 
    printf("\nPopulacao: \n");
    scanf("%d", & populacao2);

	
	printf("\nArea: \n");
    scanf("%f", & area2);

    
    printf("\nPIB: \n");
    scanf("%f", & pib2);
 
    printf("\nNumero de Pontos Turisticos: \n");
    scanf("%d", & turistas2);

    
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", Estado);
	printf("Codigo: %s\n", codigo);
	printf("Nome da Cidade: %s", cidade);
	printf("Populacao: %d\n" , populacao);
	printf("Area: %fKm\n" , area);
	printf("PIB: %f bilhoes de reais\n" , pib);
	printf("Numero de Pontos Turisticos: %d\n" , turistas);
	
	printf("\nCarta 2: \n");
    printf("Estado: %s\n", Estado2);
	printf("Codigo: %s\n", codigo2);
	printf("Nome da Cidade: %s", cidade2);
	printf("Populacao: %d\n" , populacao2);
	printf("Area: %fKm\n" , area2);
	printf("PIB: %f bilhoes de reais\n" , pib2);
	printf("Numero de Pontos Turisticos: %d" , turistas2);
	return 0;
}
