#include<stdio.h>
int main(){

	char estado1;
	char codigoCarta1[4];
	char nomeCidade1[25];
	int populacao1;
	int pontosTuristicos1;
	float area1;
	float pib1;

	char estado2;
	char codigoCarta2[4];
	char nomeCidade2[25];
	int populacao2;
	int pontosTuristicos2;
	float area2;
	float pib2;

	//Recebendo valores do usuário para a carta 1
	printf("\n\nCarta 1\n");
	printf("\nInforme a primeira letra do Estado: ");
	scanf("%c", &estado1);
	printf("\nInforme o código da carta. Ex: 01, 02, 03 ou 04: ");
	scanf("%s", codigoCarta1);
	printf("\nInforme o nome cidade: ");
	scanf(" %[^\n]", nomeCidade1);
	printf("\nInforme quantidade total da população no Estado: ");
	scanf("%d", &populacao1);
	printf("\nInforme a área total do Estado: ");
	scanf("%f", &area1);
	printf("\nInforme o PIB do Estado: ");
	scanf("%f", &pib1);
	printf("\nInforme a quantidade de pontos turisticos do Estado: ");
	scanf(" %d", &pontosTuristicos1);

	//Recebendo valores do usuário para a carta 2
	printf("\n\nCarta 2\n");
	printf("\nInforme a primeira letra do Estado: ");
	scanf(" %c", &estado2);
	printf("\nInforme o código da carta. Ex: 01, 02, 03 ou 04: ");
	scanf("%s", codigoCarta2);
	printf("\nInforme o nome cidade: ");
	scanf(" %[^\n]", nomeCidade2);
	printf("\nInforme quantidade total da população no Estado: ");
	scanf("%d", &populacao2);
	printf("\nInforme a área total do Estado: ");
	scanf("%f", &area2);
	printf("\nInforme o PIB do Estado: ");
	scanf("%f", &pib2);
	printf("\nInforme a quantidade de pontos turisticos do Estado: ");
	scanf("%d", &pontosTuristicos2);

	printf("\n\n");

	//Monstrando a carta 1
	printf("\nCarta 1:");
	printf("\nEstado: %c", estado1);
	printf("\nCódigo: %s", codigoCarta1);
	printf("\nNome da Cidade: %s", nomeCidade1);
	printf("\nPopulação: %d", populacao1);
	printf("\nÁrea: %f", area1);
	printf("\nPIB: %f", pib1);
	printf("\nNúmeros de Pontos Turísticos: %d",pontosTuristicos1);

	printf("\n\n");

	//Monstrando a carta 2
	printf("\nCarta 2:");
	printf("\nEstado: %c", estado2);
	printf("\nCódigo: %s", codigoCarta2);
	printf("\nNome da Cidade: %s", nomeCidade2);
	printf("\nPopulação: %d", populacao2);
	printf("\nÁrea: %f", area2);
	printf("\nPIB: %f", pib2);
	printf("\nNúmeros de Pontos Turísticos: %d",pontosTuristicos2);

	printf("\n\n");

}