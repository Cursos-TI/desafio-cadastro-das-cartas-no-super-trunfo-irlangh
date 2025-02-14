#include <stdio.h>

int main(){ 
    
    //declaração
    char codigo[4];
    int populacao, pontosturisticos; 
    float area , pib; 
    
    /* Apresentação do sistema e entrada de dados pelo usuário. */ 
    printf("Bem vindo ao Super Trunfo: Paises\n");
    printf("___________________________________\n");

    printf("Digite o Código de Sua Cidade (ex: A01, B02...): "); 
    scanf("%s", codigo);

    printf("Digite a População de Sua Cidade: ");
    scanf("%d", &populacao);

    printf("Digite a Área de Sua Cidade: ");
    scanf("%f", &area);
    
    printf("Digite o PIB de Sua Cidade: ");
    scanf("%f", &pib);
    
    printf("Digite o Número de Pontos Turísticos de Sua Cidade: ");
    scanf("%d", &pontosturisticos); 
    
    //apresentação de dados anteriormente inseridos pelo usuário.
    
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", codigo);
    printf("População: %d Habitantes\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f Bilhoes de Dólares\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);
    
    //encerra o programa.

    return 0; 

}