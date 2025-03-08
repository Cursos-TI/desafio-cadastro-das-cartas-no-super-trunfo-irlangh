#include <stdio.h>

int main(){ 
    
    //declaração]
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, pontosturisticos1,pontosturisticos2; 
    float area1, area2, pib1, pib2; 
    
    /* Apresentação do sistema e entrada de dados pelo usuário. */ 
    printf("Bem vindo ao Super Trunfo: Paises\n");
    printf("___________________________________\n");

    printf("_____________\n");
    printf("CARTA n° 1:\n");
    printf("_____________\n");

    printf("Digite uma letra de 'A' a 'H' para representar seu estado\n"); 
    scanf(" %c", &estado1);

    printf("Digite o Código de sua carta (use a letra do seu estado seguida de um numero de '01' a '04'):\n"); 
    scanf(" %s", &codigo1);
    
    printf("Digite o nome da Cidade\n"); 
    scanf(" %s", &cidade1);

    printf("Digite a População de Sua Cidade:\n");
    scanf(" %d", &populacao1);

    printf("Digite a Área de Sua Cidade:\n");
    scanf(" %f", &area1);
    
    printf("Digite o PIB de Sua Cidade:\n");
    scanf(" %f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos de Sua Cidade:\n");
    scanf(" %d", &pontosturisticos1); 

    printf("_____________\n");
    printf("CARTA n° 2:\n");
    printf("_____________\n");

    printf("Digite uma letra de 'A' a 'H' para representar seu estado\n"); 
    scanf(" %c", &estado2);

    printf("Digite o Código de sua carta (use a letra do seu estado seguida de um numero de '01' a '04'):\n"); 
    scanf(" %s", &codigo2);
    
    printf("Digite o nome da Cidade\n"); 
    scanf(" %s", &cidade2);

    printf("Digite a População de Sua Cidade:\n");
    scanf(" %d", &populacao2);

    printf("Digite a Área de Sua Cidade:\n");
    scanf(" %f", &area2);
    
    printf("Digite o PIB de Sua Cidade:\n");
    scanf(" %f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos de Sua Cidade:\n");
    scanf(" %d", &pontosturisticos2);
    
    //apresentação de dados anteriormente inseridos pelo usuário.
    
    printf("\n--- Dados Basicos de suas Cartas ---\n");

    printf("-----------\n");
    printf("Carta n° 1\n");
    printf("-----------\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome de Cidade: %s\n", cidade1);
    printf("População: %d Habitantes\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f R$\n", pib1);
    printf("Numero de pontos Turísticos: %d\n", pontosturisticos1);

    printf("-----------\n");
    printf("Carta n° 2\n");
    printf("-----------\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome de Cidade: %s\n", cidade2);
    printf("População: %d Habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f R$\n", pib2);
    printf("Numero de pontos Turísticos: %d\n", pontosturisticos2);
    
    //encerra o programa.

    return 0;

}