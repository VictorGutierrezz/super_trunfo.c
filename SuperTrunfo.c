#include <stdio.h>
#include <string.h>
int main() {
    char Estado[1], codigo[3], cidade[50];
    int populacao,turistas;
    float area, pib, densidadePopu, pibCapita;
    
    char Estado2[1], codigo2[3], cidade2[50];
    int populacao2,turistas2;
    float area2, pib2, densidadePopu2, pibCapita2;
   
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

    densidadePopu = populacao / area;
    densidadePopu2 = populacao2 / area2;
    
    pibCapita = pib / populacao;
    pibCapita2 = pib2 / populacao2;
    
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", Estado);
	printf("Codigo: %s\n", codigo);
	printf("Nome da Cidade: %s", cidade);
	printf("Populacao: %d\n" , populacao);
	printf("Area: %.2fKm\n" , area);
	printf("PIB: %.2f bilhoes de reais\n" , pib);
	printf("Numero de Pontos Turisticos: %.2f\n" , turistas);
	printf("Densidade Populacional: %.2f hab/km\n" , densidadePopu);
	printf("PIB per Capita: %.2f reais\n" , pibCapita);
	
	
	printf("\nCarta 2: \n");
    printf("Estado: %s\n", Estado2);
	printf("Codigo: %s\n", codigo2);
	printf("Nome da Cidade: %s", cidade2);
	printf("Populacao: %d\n" , populacao2);
	printf("Area: %.2fKm\n" , area2);
	printf("PIB: %.2f bilhoes de reais\n" , pib2);
	printf("Numero de Pontos Turisticos: %d" , turistas2);
	printf("Densidade Populacional: %.2f hab/km\n" , densidadePopu2);
	printf("PIB per Capita: %.2f reais\n" , pibCapita2);
	
	
	
	return 0;
}
